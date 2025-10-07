ifneq ($(V),1)
.SILENT:
endif

.PHONY: all objdir cleantarget clean realclean wipeclean distclean

# CORE VARIABLES

MODULE := libz
VERSION := 
CONFIG := release
ifndef COMPILER
COMPILER := default
endif

TARGET_TYPE = staticlib

# FLAGS

ECFLAGS =
ifndef DEBIAN_PACKAGE
CFLAGS =
LDFLAGS =
endif
PRJ_CFLAGS =
CECFLAGS =
OFLAGS =
LIBS =

ifdef DEBUG
NOSTRIP := y
endif

CONSOLE = -mwindows

# INCLUDES

_CF_DIR = ../../

include $(_CF_DIR)crossplatform.mk
include $(_CF_DIR)$(COMPILER).cf

# POST-INCLUDES VARIABLES

OBJ = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/

RES = 

TARGET_NAME := z

TARGET = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/$(LP)$(TARGET_NAME)$(OUT)

_OBJECTS = \
	$(OBJ)adler32$(O) \
	$(OBJ)compress$(O) \
	$(OBJ)crc32$(O) \
	$(OBJ)deflate$(O) \
	$(OBJ)infback$(O) \
	$(OBJ)inffast$(O) \
	$(OBJ)inflate$(O) \
	$(OBJ)inftrees$(O) \
	$(OBJ)trees$(O) \
	$(OBJ)uncompr$(O) \
	$(OBJ)zutil$(O)

OBJECTS = $(_OBJECTS)

SOURCES = \
	src/adler32.c \
	src/compress.c \
	src/crc32.c \
	src/deflate.c \
	src/infback.c \
	src/inffast.c \
	src/inflate.c \
	src/inftrees.c \
	src/trees.c \
	src/uncompr.c \
	src/zutil.c

RESOURCES =

LIBS += $(SHAREDLIB) $(EXECUTABLE) $(LINKOPT)

PRJ_CFLAGS += \
	 $(if $(DEBUG), -g, -O2 -ffast-math) $(FPIC) -w -DREPOSITORY_VERSION="\"$(REPOSITORY_VER)\""

ECFLAGS += -module $(MODULE)
CECFLAGS += -cpp $(_CPP)

# TARGETS

all: objdir $(TARGET)

objdir:
	$(if $(wildcard $(OBJ)),,$(call mkdir,$(OBJ)))

$(SYMBOLS): | objdir
$(OBJECTS): | objdir
$(TARGET): $(SOURCES) $(RESOURCES) $(SYMBOLS) $(OBJECTS) | objdir
	@$(call rm,$(OBJ)objects.lst)
	@$(call touch,$(OBJ)objects.lst)
	$(call addtolistfile,$(_OBJECTS),$(OBJ)objects.lst)
ifndef STATIC_LIBRARY_TARGET
	$(CC) $(OFLAGS) @$(OBJ)objects.lst $(LIBS) -o $(TARGET) $(INSTALLNAME)
ifndef NOSTRIP
	$(STRIP) $(STRIPOPT) $(TARGET)
endif
else
ifdef WINDOWS_HOST
	$(AR) rcs $(TARGET) @$(OBJ)objects.lst $(LIBS)
else
	$(AR) rcs $(TARGET) $(OBJECTS) $(LIBS)
endif
endif
ifdef SHARED_LIBRARY_TARGET
ifdef LINUX_TARGET
ifdef LINUX_HOST
	$(if $(basename $(VER)),ln -sf $(LP)$(MODULE)$(SO)$(VER) $(OBJ)$(LP)$(MODULE)$(SO)$(basename $(VER)),)
	$(if $(VER),ln -sf $(LP)$(MODULE)$(SO)$(VER) $(OBJ)$(LP)$(MODULE)$(SO),)
endif
endif
endif

# SYMBOL RULES

# C OBJECT RULES

# OBJECT RULES

$(OBJ)adler32$(O): src/adler32.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/adler32.c) -o $(call quote_path,$@)

$(OBJ)compress$(O): src/compress.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/compress.c) -o $(call quote_path,$@)

$(OBJ)crc32$(O): src/crc32.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/crc32.c) -o $(call quote_path,$@)

$(OBJ)deflate$(O): src/deflate.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/deflate.c) -o $(call quote_path,$@)

$(OBJ)infback$(O): src/infback.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/infback.c) -o $(call quote_path,$@)

$(OBJ)inffast$(O): src/inffast.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/inffast.c) -o $(call quote_path,$@)

$(OBJ)inflate$(O): src/inflate.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/inflate.c) -o $(call quote_path,$@)

$(OBJ)inftrees$(O): src/inftrees.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/inftrees.c) -o $(call quote_path,$@)

$(OBJ)trees$(O): src/trees.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/trees.c) -o $(call quote_path,$@)

$(OBJ)uncompr$(O): src/uncompr.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/uncompr.c) -o $(call quote_path,$@)

$(OBJ)zutil$(O): src/zutil.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(call quote_path,src/zutil.c) -o $(call quote_path,$@)

cleantarget:
	$(call rm,$(OBJ)objects.lst)
	$(call rm,$(TARGET))
ifdef SHARED_LIBRARY_TARGET
ifdef LINUX_TARGET
ifdef LINUX_HOST
	$(call rm,$(OBJ)$(LP)$(MODULE)$(SO)$(basename $(VER)))
	$(call rm,$(OBJ)$(LP)$(MODULE)$(SO))
endif
endif
endif

clean: cleantarget
	$(call rm,$(_OBJECTS))

realclean: cleantarget
	$(call rmr,$(OBJ))

wipeclean:
	$(call rmr,obj/)

distclean:
	$(_MAKE) -f $(_CF_DIR)Cleanfile distclean distclean_all_subdirs

$(MAKEFILE_LIST): ;
$(SOURCES): ;
$(RESOURCES): ;
