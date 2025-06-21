public import IMPORT_STATIC "ecrt"

public enum WireType
{
   varint = 0,
   bits64 = 1,
   lengthDelimited = 2,
   startGroup = 3, endGroup = 4,   // deprecated
   bits32 = 5
};

class VarInt : uint64
{
   property int64 sint64
   {
      get { return ((int64)(this >> 1)) ^ -(int64)(this & 1); }
   }
   property int sint32
   {
      get { return ((int)  (this >> 1)) ^ -(int)  (this & 1); }
   }

   VarInt ::fromSInt64(int64 value)
   {
      return (value << 1) ^ (value >> 63);
   }

   VarInt ::fromSInt32(int value)
   {
      return (value << 1) ^ (value >> 31);
   }
}

class ProtocolBuffer
{
   byte needData[16];
   ProtocolBuffer()
   {
      memset(needData, 1, 16);
   }
public:
   virtual void clear();

   virtual bool onKeyValuePairVarInt(uint64 key, VarInt d);
   virtual bool onKeyValuePairLength(uint64 key, uint64 l, byte * d, bool * freeData);
   virtual bool onKeyValuePair64(uint64 key, uint64 d);
   virtual bool onKeyValuePair32(uint64 key, uint32 d);

   uint ::readVarInt(IOChannel f, VarInt * v)
   {
      uint64 number = 0;
      int n = 0;
      byte b;
      uint shift = 0;
      while(f.ReadData(&b, 1))
      {
         number |= ((uint64)(b & ~0x80)) << shift;
         if(++n == 10 || !(b & 0x80)) break;
         shift += 7;
      }
      *v = number;
      return n;
   }

   uint ::writeVarInt(IOChannel f, VarInt v)
   {
      uint64 number = v;
      int n = 0;
      byte bytes[16];   // 10 bytes max?

      while(true)
      {
         byte b = number & 0x7F;
         bool done = !(number & 0xFFFFFFFFFFFFFF80LL);
         number >>= 7;
         if(!done) b |= 0x80;
         bytes[n] = b;
         n++;
         if(done) break;
      }
      f.WriteData(bytes, n);
      return n;
   }

   bool decode(IOChannel f, uint size)
   {
      bool result = true;

      uint64 p = 0;
      clear();
      while(p < size && result)
      {
         VarInt keyAndType, key;
         WireType type;

         p += readVarInt(f, &keyAndType);
         key = keyAndType >> 3;
         type = (WireType)(keyAndType & 0x7);

         switch(type)
         {
            case varint:
            {
               VarInt v;
               p += readVarInt(f, &v);
               result = onKeyValuePairVarInt(key, v);
               break;
            }
            case lengthDelimited:
            {
               VarInt l;

               p += readVarInt(f, &l);
               if(l < 64 * 1048576)
               {
                  if(key < 16 && !needData[key] && l < 4096)
                  {
                     byte d[4096];
                     bool freeData = false;
                     p += f.ReadData(d, (uint)l);
                     d[l] = 0;
                     result = onKeyValuePairLength(key, l, d, &freeData);
                  }
                  else
                  {
                     bool freeData = true;
                     byte * d = new byte[l+1];
                     p += f.ReadData(d, (uint)l);
                     d[l] = 0;
                     result = onKeyValuePairLength(key, l, d, &freeData);
                     if(freeData)
                        delete d;
                  }
               }
               else
               {
                  PrintLn("WARNING: very large length decoding PBF");
                  result = false;
               }
               break;
            }
            case bits64:
            {
               uint64 v;
               p += f.ReadData(&v, sizeof(uint64));
               result = onKeyValuePair64(key, v);
               break;
            }
            case bits32:
            {
               uint32 v;
               p += f.ReadData(&v, sizeof(uint32));
               result = onKeyValuePair32(key, v);
               break;
            }
            case startGroup:
            case endGroup:
               PrintLn("Error: Deprecated start/end group unsupported");
               result = false;
               break;
         }
      }
      /*
      if(!result)
      {
         void * d = new byte[size - p];
         f.ReadData(d, size - p);
         delete d;
      }
      */
      return result;
   }

   void ::encodeVarInt(IOChannel f, int key, int64 value)
   {
      uint32 keyAndType = (key << 3) | (WireType::varint);

      writeVarInt(f, keyAndType);
      writeVarInt(f, value);
   }

   void ::encodeLength(IOChannel f, int key, byte * data, uint length)
   {
      uint32 keyAndType = (key << 3) | (WireType::lengthDelimited);

      writeVarInt(f, keyAndType);
      writeVarInt(f, length);
      f.WriteData(data, length);
   }

   void ::encode64(IOChannel f, int key, uint64 * v, int count)
   {
      uint32 keyAndType = (key << 3) | (WireType::bits64);

      writeVarInt(f, keyAndType);
      f.WriteData(v, sizeof(uint64) * count);
   }

   void ::encode32(IOChannel f, int key, uint32 * v, int count)
   {
      uint32 keyAndType = (key << 3) | (WireType::bits32);

      writeVarInt(f, keyAndType);
      f.WriteData(v, sizeof(uint32) * count);
   }
}
