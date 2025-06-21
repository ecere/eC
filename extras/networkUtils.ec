public import IMPORT_STATIC "ecrt"

private:

#ifndef CURL_DISABLE_TYPECHECK
#define CURL_DISABLE_TYPECHECK
#endif

#if !defined(__linux__)
#define NO_CURL_MIME // We still use an older version of libCURL without the MIME API in the Ecere SDK dependencies
#endif

import "NetworkThread"

/* #define GetObject _GetObject */
#if !defined(GNOSIS_NOCURL)
#define Size Size_
#define String    String_
#define String2    String2_
#define Interface    Interface_
#define Socket    Socket_
#define Alignment Alignment_
#define int64
#include <curl/curl.h>
#undef String
#undef String2
#undef Size
#undef Interface
#undef Socket
#undef Alignment
#undef int64
/* #undef GetObject */
#include <stdarg.h>

/*
All HTTP VERBS
GET
    The GET method requests a representation of the specified resource. Requests using GET should only retrieve data.
HEAD
    The HEAD method asks for a response identical to that of a GET request, but without the response body.
POST
    The POST method is used to submit an entity to the specified resource, often causing a change in state or side effects on the server.
PUT
    The PUT method replaces all current representations of the target resource with the request payload.
DELETE
    The DELETE method deletes the specified resource.
CONNECT
    The CONNECT method establishes a tunnel to the server identified by the target resource.
OPTIONS
    The OPTIONS method is used to describe the communication options for the target resource.
TRACE
    The TRACE method performs a message loop-back test along the path to the target resource.
PATCH
    The PATCH method is used to apply partial modifications to a resource.

    How to enable redirect:
      curl_easy_setopt(easyHandle, CURLOPT_FOLLOWLOCATION, 1L);
      curl_easy_setopt(easyHandle, CURLOPT_MAXREDIRS, 3L);
 */

public:

intsize fnCurlRead(void *contents, intsize size, intsize nmemb, TempFile file)
{
   // This function is copyied from NetworkThread.ec, because being static could not be called here
   return file.Read(contents, size, nmemb);
}

static intsize fnCurlWrite(void *contents, intsize size, intsize nmemb,TempFile file)
{
   // This function is copyied from NetworkThread.ec, because being static could not be called here
   return file.Write(contents, size, nmemb);
}

static int fnCurlSeek(void *arg, intsize offset, int origin)
{
   // This function is not present in NetworkThread.ec
  File source = (File)arg;
  FileSeekMode mode;

  switch(origin) {
  case SEEK_END:
     mode = end;
    break;
  case SEEK_CUR:
     mode = current;
    break;
  default:
     mode = start;
    break;
  }
  return source.Seek(offset, mode) ? CURL_SEEKFUNC_OK : CURL_SEEKFUNC_FAIL;
}

intsize fnCurlHWrite(void *contents, intsize size, intsize nmemb,TempFile file)
{
   return file.Write(contents, size, nmemb);
}

intsize fnCurlBWrite(void *contents, intsize size, intsize nmemb, TempFile file)
{
   return file.Write(contents, size, nmemb);
}

#ifdef __CURL_TRACE
void dump(const char *text,
          FILE *stream, unsigned char *ptr, size_t size)
{
  size_t i;
  size_t c;
  unsigned int width=0x10;

  fprintf(stream, "%s, %10.10ld bytes (0x%8.8lx)\n",
          text, (long)size, (long)size);

  for(i=0; i<size; i+= width) {
    fprintf(stream, "%4.4lx: ", (long)i);

    /* show hex to the left */
    for(c = 0; c < width; c++) {
      if(i+c < size)
        fprintf(stream, "%02x ", ptr[i+c]);
      else
        fputs("   ", stream);
    }

    /* show data on the right */
    for(c = 0; (c < width) && (i+c < size); c++) {
      char x = (ptr[i+c] >= 0x20 && ptr[i+c] < 0x80) ? ptr[i+c] : '.';
      fputc(x, stream);
    }

    fputc('\n', stream); /* newline */
  }
}

static
int my_trace(CURL *handle, curl_infotype type,
             char *data, size_t size,
             void *userp)
{
   FILE *errori = fopen("balordigia.txt", "a");
  const char *text;
  (void)handle; /* prevent compiler warning */
  (void)userp;

  switch (type) {
  case CURLINFO_TEXT:
    fprintf(errori, "== Info: %s", data);
    fprintf(stderr, "== Info: %s", data);
  default:
    return 0;

  case CURLINFO_HEADER_OUT:
    text = "=> Send header";
    break;
  case CURLINFO_DATA_OUT:
    text = "=> Send data";
    break;
  case CURLINFO_SSL_DATA_OUT:
    text = "=> Send SSL data";
    break;
  case CURLINFO_HEADER_IN:
    text = "<= Recv header";
    break;
  case CURLINFO_DATA_IN:
    text = "<= Recv data";
    break;
  case CURLINFO_SSL_DATA_IN:
    text = "<= Recv SSL data";
    break;
  }

  dump(text, errori, (unsigned char *)data, size);
  dump(text, stderr, (unsigned char *)data, size);
  fclose(errori);
  return 0;
}
#endif

// FIXME: Utility modules included as eC files should not define public methods or types
public struct FormPart
{
   const String field;
   /* const */ File content; // The const specifier causes warning when using the content.buffer property
   const String contentType;
   const String fileName;
   bool isValid()
   {
      return field && content && content.GetSize();
   }

private:
#if !defined(NO_CURL_MIME)
   // FIXME: Should not use internal library types in non-static methods / classes
   bool addToMime(curl_mime *mime)
   {
      bool retVal;
      // Create a new curl_mimepart
      curl_mimepart *part = curl_mime_addpart(mime);
      retVal = part != null;

      // Rewind the content file to be on the safe side.
      content.Seek(0, start);

      if(retVal)
         // Set the field the part will be associated with
         retVal = CURLE_OK == curl_mime_name(part, field);

      if(retVal)
         // Copy the content to the curl_mimepart via a callback, so that
         // it will work even if it is a regular File of large size rather
         // than a TempFile, howeverwe should use the correct size.
         retVal = CURLE_OK == curl_mime_data_cb(part, content.GetSize(), fnCurlRead, fnCurlSeek, null, content);

      if(retVal && contentType)
         // Content-type for this part !!RASDAMAN WANTS null for the script part
         // and "application/octet-stream" for the upload of temporary coverages
         retVal = CURLE_OK == curl_mime_type(part, contentType);

      if(retVal && fileName)
         // Tell the remote host the filename to associate with this part,
         // wether or not it was a file or not to begin with.
         // RASDAMAN needs it to upload temporary coverages, optional for the script.
         retVal = CURLE_OK == curl_mime_filename(part, fileName);

      /*
       * Snippets that mayt be useful later on:
       *
       * from https://curl.se/libcurl/c/curl_mime_headers.html
       struct curl_slist *headers = null;
       headers = curl_slist_append(headers, "Custom-Header: mooo");

      // use these headers, please take ownership
      curl_mime_headers(part, headers, TRUE);

       * // from https://curl.se/libcurl/c/curl_mime_encoder.html
      // encode file data in base64 for transfer
      curl_mime_encoder(part, "base64");
       */
      return retVal;

   }

   // FIXME: Should not use internal library types in non-static methods / classes
   curl_mime *updateCurlMime(curl_mime *mime)
   {
      if(!mime)
         return null;
      return null;
   }
#endif
};

int curlACTION(const String action, const String url,  // minimal input common to all actions
      Array<MapNode<const String, const String>> headSet, TempFile payload, Array<FormPart> parts, // vars to set request params.
      File * outputPtr, File * headsPtr) // pointers to get response data.
{
   /*
    * Unified interface to curl_easy interface.
    * input:
    * action: *Must* be one of ["GET", "POST", "DELETE", "PUT", "PATCH"] (case sensitive), otherwise return 400.
    *
    *     Action "PATCH" is actually "PUT" with CURLOPT_CUSTOMREQUEST set to "PATCH".
    * url: The url to which the request will be sent. No validation is performed in this function.
    *
    * headSet: List of field name, value that will each become an entry in the request header:
    *    eg. {[{"Accept", "application/json"}]}.
    *    This form, is slightly more verbose than {["Accept: application/json"]},
    *    but avoids declaring string buffers only to do
    *    sprintf(buffer, "Accept: %s", acceptValue) in the caller, when the
    *    value is not hard-wired as in the example above.
    *    It is the caller's responsibility to provide a correctly formed
    *    headSet (the null and empty Array are fine) and to disopse of it at a
    *    suitable time.
    *
    *    Note that, according to (https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.2)
    *    some headers can be repeated with different values that are
    *    concatenates in a comma separated list, making teir order significant.
    *    So eg.:
    *        {[{"Accept", "application/json"}, {"Accept", "application/text"}]}
    *     is equivalent to:
    *        {[{"Accept", "application/json, application/text"}]},
    *     but not to:
    *        {[{"Accept", "application/text, application/json"}]},
    *    The use of array instead of Map allows this use case.
    *
    * payload: TempFile containing the data to be sent with the request.
    *     For "POST", "PUT" and "PATCH" requests, passing an invalid TempFile causes status code 400.
    *     For "GET" and "DELETE" requests, it is ignored and can be null.
    *
    * parts: Array<FormPart> used to post multipat forms.
    *     Each element contains the necessary information to compose a part (See relative documentation).
    *     Mandatory information is the field name (member String field) and the part payload (member File content).
    *     What information can be omitted depends on what the server being posted to expects.
    *     According to https://www.w3.org/TR/html4/interact/forms.html#h-17.13.4 :
    *
    *       A "multipart/form-data" message contains a series of parts, each representing a
    *       successful control. The parts are sent to the processing agent in the same
    *       order the corresponding controls appear in the document stream. Part boundaries
    *       should not occur in any of the data; how this is done lies outside the scope of
    *       this specification.
    *
    * outputPtr: Pointer to the file that will contain the response body.
    *     It is required that outputPtr != null, otherwise return 400 Bad Request and do not create a file.
    *     If *outputPtr == null a TempFile will be created, the request may still be bad for other reasons.
    *     If *outputPtr != null the data will be appended to it.
    *     The File will be rewound before returning.
    *
    * headsPtr: Pointer to the file that will contain the response headers.
    *     If headsPtr == null, no headers will be provided.
    *     If *headsPtr == null a TempFile will be created, the request may still be bad for other reasons.
    .
    *     If *headsPtr != null the data will be appended to it.
    *     The File will be rewound before returning.
    */
   long httpCode = 0;
   CURL * curl = curl_easy_init();
   if(curl)
   {
      CURLcode res;
      File output = null;
      File headers = null;
#ifndef NO_CURL_MIME
      curl_mime *mime = null;
#endif
      struct curl_slist *hs = null;
      String escapedUrl = httpEscape(url);
      char headEntry[1024];
      for(hh : headSet)
      {
         sprintf(headEntry, "%s: %s", hh.key, hh.value);
         hs = curl_slist_append(hs, headEntry);
         headEntry[0] = '\0';
      }

      curl_easy_setopt(curl, CURLOPT_URL, escapedUrl);
      curl_easy_setopt(curl, CURLOPT_HTTPHEADER, hs);
      curl_easy_setopt(curl, CURLOPT_USERAGENT, "libcurl-agent/1.0");

      curl_easy_setopt(curl, CURLOPT_ACCEPT_ENCODING, "gzip, deflate");
      curl_easy_setopt(curl, CURLOPT_SSL_OPTIONS, CURLSSLOPT_NATIVE_CA);
      SetCurlEmbeddedCA(curl);

      if (outputPtr)
      {
         if (*outputPtr)
         {
            output = *outputPtr;
         }
         else
         {
            output = TempFile {};
            *outputPtr = output;
         }
         curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, fnCurlWrite);
         curl_easy_setopt(curl, CURLOPT_WRITEDATA, output);
      }
      else
      { // Bad Request because there is no way to return the response body.
         httpCode = 400;
      }

      if (headsPtr)
      {
         if (*headsPtr)
         {
            headers = *headsPtr;
         }
         else
         {
            headers = TempFile {};
            *headsPtr = headers;
         }
         curl_easy_setopt(curl, CURLOPT_HEADERFUNCTION, fnCurlWrite);
         curl_easy_setopt(curl, CURLOPT_HEADERDATA, headers);
      }

      if (!strcmp(action, "POST") || !strcmp(action, "PUT") || !strcmp(action, "PATCH"))
      {
#if !defined(NO_CURL_MIME)
         if (action[1] == 'O' && parts)
         { // This is "POST" with mime htm protocol  https://curl.se/libcurl/c/smtp-mime.html
            mime = curl_mime_init(curl);
            if (mime)
            {
               curl_easy_setopt(curl, CURLOPT_MIMEPOST, mime);
               for(p: parts)
               {
                  FormPart aPart = p;
                  if(!aPart.isValid() ||  !aPart.addToMime(mime))
                  {
                     // Report [400] Bad Request if a part cannot be addedit caused failure to init the mime:
                     // a better code may exist.
                     httpCode = 400;
                  }

               }
            }
            else
            {
               // Report [400] Bad Request if it caused failure to tint the mime:
               // a better code may exist.
               httpCode = 400;
            }
         }
         else
#endif
         if (payload)
         {
            if(action[1] == 'O')
            { // This is "POST" with postfields protocol

               curl_easy_setopt(curl, CURLOPT_POST, 1L);
               curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)payload.GetSize());
            }
            else
            { // Either "PUT" or "PATCH".
               curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
               curl_easy_setopt(curl, CURLOPT_INFILESIZE_LARGE, (curl_off_t)payload.GetSize());
               if (action[1] == 'A') // Only for "PATCH"
                  curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "PATCH");
            }

            curl_easy_setopt(curl, CURLOPT_READFUNCTION, fnCurlRead);
            curl_easy_setopt(curl, CURLOPT_READDATA, payload);

            curl_easy_setopt(curl, CURLOPT_SEEKFUNCTION, fnCurlSeek);
            curl_easy_setopt(curl, CURLOPT_SEEKDATA, payload);
         }
         else
         {
            // Report [400] Bad Request if no payload or curl_mime parts
            httpCode = 400;
         }

      }
      else if (!strcmp(action, "DELETE"))
      {
         curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "DELETE");
      }
      else if (strcmp(action, "GET"))
      { // The action was not among the admissible ones.
         // Report [400] Bad Request.
         httpCode = 400;
      }

      //
      if (httpCode == 0)
      {
#ifdef _DEBUG
# ifdef __CURL_TRACE
               curl_easy_setopt(curl, CURLOPT_ACCEPT_ENCODING, null);
               curl_easy_setopt(curl, CURLOPT_DEBUGFUNCTION, my_trace);
               curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
# endif
#endif
         res = curl_easy_perform(curl);

         if(res == CURLE_OK)
         {
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &httpCode);
#ifdef _DEBUG
            PrintLn("Received HTTP code: ", httpCode);
            if(httpCode != 200)
            {
               char * buffer;
               uint64 pos = output.Tell();
               output.Seek(0, start);
               buffer = new0 char[pos+1];
               output.Read(buffer, 1, pos);
               PrintLn(buffer);
               output.Seek(pos, start);
               delete buffer;
            }
#endif
         }
         else
            PrintLn("curl_easy_perform() failed: ", curl_easy_strerror(res));
      }

      // Cleanup anyways.
      curl_slist_free_all(hs);
      curl_easy_cleanup(curl);
#if !defined(NO_CURL_MIME)
      curl_mime_free(mime);
#endif
      delete escapedUrl;
   }
   if (outputPtr && *outputPtr)
      (*outputPtr).Seek(0, start);
   if (headsPtr && *headsPtr)
      (*headsPtr).Seek(0, start);
   return (int)httpCode;
}

int curlACTIONretryN(int retry, const String action, const String url,
     Array<MapNode<const String, const String>> headSet, TempFile payload, Array<FormPart> parts,
      File * outputPtr, File * headsPtr)
{
   /*
    * Perform curlACTION and if it returns with a replyCode >= 500, retry up to
    * retry times, with a delay that doubles every time, up to a maximum of
    * maxWait seconds (currently 8).
    * Aside from the retry parameter, the interface is the same as curlACTION.
    * */

   int replyCode;
   int maxWait = 8;
   while(true)
   {
      replyCode = curlACTION(action, url, headSet, payload, parts, outputPtr, headsPtr);

      if(!--retry || (replyCode != 429 && replyCode != 502 && replyCode != 503 && replyCode != 504))
         break;

      delete *outputPtr;
      delete *headsPtr;
      eC::time::Sleep(maxWait/(1<<retry));
   }
   return replyCode;
}

#endif
