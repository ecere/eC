ifneq ($(V),1)
.SILENT:
endif

.PHONY: all objdir clean realclean wipeclean distclean

# CORE VARIABLES

MODULE := ecrt
CONFIG := bootstrap
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
include $(_CF_DIR)default.cf

# POST-INCLUDES VARIABLES

OBJ = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/

RES = res/

TARGET = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/$(LP)ecrtBootstrap$(A)

OBJECTS = \
	$(OBJ)Array.o \
	$(OBJ)AVLTree.o \
	$(OBJ)BinaryTree.o \
	$(OBJ)BTNode.o \
	$(OBJ)BufferedFile.o \
	$(OBJ)BuiltInContainer.o \
	$(OBJ)Container.o \
	$(OBJ)CustomAVLTree.o \
	$(OBJ)dataTypes.o \
	$(OBJ)DualPipe.o \
	$(OBJ)ecrt.main.o \
	$(OBJ)File.o \
	$(OBJ)instance.o \
	$(OBJ)LinkList.o \
	$(OBJ)List.o \
	$(OBJ)Map.o \
	$(OBJ)memory.o \
	$(OBJ)OldList.o \
	$(OBJ)String.o \
	$(OBJ)System.o \
	$(OBJ)TempFile.o \
	$(OBJ)instance.c.o \
	$(OBJ)DualPipe.c.o \
	$(OBJ)File.c.o \
	$(OBJ)System.c.o \
	$(OBJ)i18n.o

SOURCES = \
	bootstrap/Array.c \
	bootstrap/AVLTree.c \
	bootstrap/BinaryTree.c \
	bootstrap/i18n.c \
	bootstrap/BTNode.c \
	bootstrap/BufferedFile.c \
	bootstrap/BuiltInContainer.c \
	bootstrap/Container.c \
	bootstrap/CustomAVLTree.c \
	bootstrap/dataTypes.c \
	bootstrap/DualPipe.c \
	bootstrap/ecrt.main.c \
	bootstrap/File.c \
	bootstrap/instance.c \
	bootstrap/LinkList.c \
	bootstrap/List.c \
	bootstrap/Map.c \
	bootstrap/memory.c \
	bootstrap/OldList.c \
	bootstrap/String.c \
	bootstrap/System.c \
	bootstrap/TempFile.c \
	../../ecrt/src/types/instance.c \
	../../ecrt/src/files/DualPipe.c \
	../../ecrt/src/files/File.c \
	../../ecrt/src/files/System.c

LIBS += $(SHAREDLIB) $(EXECUTABLE) $(LINKOPT)

ifndef STATIC_LIBRARY_TARGET
LIBS +=
endif

PRJ_CFLAGS += \
	 $(if $(DEBUG),-g) $(FPIC) -w \
	 -DBUILDING_ECRT -DEC_STATIC -DEC_BOOTSTRAP
ECFLAGS += \
	 -nolinenumbers -defaultns eC

CECFLAGS += -cpp $(_CPP)

# TARGETS

all: objdir $(TARGET)

objdir:
	$(call mkdir,$(OBJ))

$(TARGET): $(SOURCES) $(RESOURCES) | objdir $(SYMBOLS) $(OBJECTS)
	$(AR) rcs $(TARGET) $(OBJECTS) $(LIBS)

# OBJECT RULES

$(OBJ)BufferedFile.o: bootstrap/BufferedFile.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/BufferedFile.c -o $(OBJ)BufferedFile.o

$(OBJ)DualPipe.o: bootstrap/DualPipe.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/DualPipe.c -o $(OBJ)DualPipe.o

$(OBJ)File.o: bootstrap/File.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/File.c -o $(OBJ)File.o

$(OBJ)memory.o: bootstrap/memory.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/memory.c -o $(OBJ)memory.o

$(OBJ)System.o: bootstrap/System.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/System.c -o $(OBJ)System.o

$(OBJ)TempFile.o: bootstrap/TempFile.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/TempFile.c -o $(OBJ)TempFile.o

$(OBJ)File.c.o: ../../ecrt/src/files/File.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c ../../ecrt/src/files/File.c -o $(OBJ)File.c.o

$(OBJ)DualPipe.c.o: ../../ecrt/src/files/DualPipe.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c ../../ecrt/src/files/DualPipe.c -o $(OBJ)DualPipe.c.o

$(OBJ)System.c.o: ../../ecrt/src/files/System.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c ../../ecrt/src/files/System.c -o $(OBJ)System.c.o

$(OBJ)i18n.o: bootstrap/i18n.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/i18n.c -o $(OBJ)i18n.o

$(OBJ)Array.o: bootstrap/Array.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/Array.c -o $(OBJ)Array.o

$(OBJ)AVLTree.o: bootstrap/AVLTree.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/AVLTree.c -o $(OBJ)AVLTree.o

$(OBJ)BuiltInContainer.o: bootstrap/BuiltInContainer.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/BuiltInContainer.c -o $(OBJ)BuiltInContainer.o

$(OBJ)Container.o: bootstrap/Container.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/Container.c -o $(OBJ)Container.o

$(OBJ)CustomAVLTree.o: bootstrap/CustomAVLTree.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/CustomAVLTree.c -o $(OBJ)CustomAVLTree.o

$(OBJ)LinkList.o: bootstrap/LinkList.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/LinkList.c -o $(OBJ)LinkList.o

$(OBJ)List.o: bootstrap/List.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/List.c -o $(OBJ)List.o

$(OBJ)Map.o: bootstrap/Map.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/Map.c -o $(OBJ)Map.o

$(OBJ)BinaryTree.o: bootstrap/BinaryTree.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/BinaryTree.c -o $(OBJ)BinaryTree.o

$(OBJ)BTNode.o: bootstrap/BTNode.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/BTNode.c -o $(OBJ)BTNode.o

$(OBJ)dataTypes.o: bootstrap/dataTypes.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/dataTypes.c -o $(OBJ)dataTypes.o

$(OBJ)instance.o: bootstrap/instance.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/instance.c -o $(OBJ)instance.o

$(OBJ)String.o: bootstrap/String.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/String.c -o $(OBJ)String.o

$(OBJ)OldList.o: bootstrap/OldList.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/OldList.c -o $(OBJ)OldList.o

$(OBJ)instance.c.o: ../../ecrt/src/types/instance.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c ../../ecrt/src/types/instance.c -o $(OBJ)instance.c.o

$(OBJ)$(MODULE).main$(O): bootstrap/$(MODULE).main.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c bootstrap/$(MODULE).main.c -o $(OBJ)$(MODULE).main$(O)

clean:
	$(call rm,$(TARGET))
	$(call rm,$(OBJECTS))

realclean:
	$(call rmr,$(OBJ))

wipeclean:
	$(call rmr,obj/)

distclean:
	$(_MAKE) -f $(_CF_DIR)Cleanfile distclean distclean_all_subdirs

$(MAKEFILE_LIST): ;
$(SOURCES): ;
$(RESOURCES): ;
