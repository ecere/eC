ifneq ($(V),1)
.SILENT:
endif

.PHONY: all objdir cleanecrttarget cleantarget clean realclean wipeclean distclean nores

# CORE VARIABLES

MODULE := ecrt
VERSION := 0.0.1
CONFIG := release
ifndef COMPILER
COMPILER := default
endif

TARGET_TYPE = sharedlib

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

_CF_DIR = ../
USE_BOOTSTRAP := defined

include $(_CF_DIR)crossplatform.mk
include $(_CF_DIR)default.cf

ifdef PREFIXLIBDIR
CFLAGS += -DDEB_HOST_MULTIARCH=\"$(call escspace,$(PREFIXLIBDIR))\"
endif

# POST-INCLUDES VARIABLES

OBJ = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/

RES = res/

TARGET = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/$(LP)ecrt$(SO)
SONAME =
ifndef SKIP_SONAME
ifdef LINUX_TARGET
TARGET = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/$(LP)ecrt$(SO)$(VER)
SONAME = -Wl,-soname,libecrt.so.0
endif
endif

_ECSOURCES = $(_ECSOURCES1) $(_ECSOURCES2) $(_ECSOURCES3)
_ECSOURCES1 = \
	src/files/Archive.ec \
	src/files/BufferedFile.ec \
	src/time/Date.ec \
	src/files/DualPipe.ec \
	src/files/EARArchive.ec \
	src/files/File.ec \
	src/files/FileMonitor.ec \
	src/json/GlobalAppSettings.ec \
	src/json/JSON.ec \
	src/json/JSONGlobalSettings.ec \
	src/types/fieldValue.ec \
	src/types/memory.ec \
	src/mt/Mutex.ec \
	src/mt/Semaphore.ec \
	src/files/System.ec \
	src/files/TempFile.ec \
	src/mt/Thread.ec \
	src/time/Time.ec \
	src/i18n/unicode.ec \
	src/types/units.ec \
	src/i18n/i18n.ec \
	src/mt/Condition.ec
_ECSOURCES2 = \
	src/containers/Array.ec \
	src/containers/AVLTree.ec \
	src/containers/BuiltInContainer.ec \
	src/containers/Container.ec \
	src/containers/CustomAVLTree.ec \
	src/containers/LinkList.ec \
	src/containers/List.ec \
	src/containers/Map.ec \
	src/containers/HashMap.ec
_ECSOURCES3 = \
	src/containers/HashTable.ec \
	src/containers/legacy/BinaryTree.ec \
	src/containers/legacy/BTNode.ec \
	src/containers/legacy/OldList.ec \
   src/types/dataTypes.ec \
	src/types/instance.ec \
	src/types/String.ec \
	
ECSOURCES = $(call shwspace,$(_ECSOURCES))
ECSOURCES1 = $(call shwspace,$(_ECSOURCES1))
ECSOURCES2 = $(call shwspace,$(_ECSOURCES2))
ECSOURCES3 = $(call shwspace,$(_ECSOURCES3))

COBJECTS = $(COBJECTS1) $(COBJECTS2) $(COBJECTS3)
COBJECTS1 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(C),$(notdir $(_ECSOURCES1)))))
COBJECTS2 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(C),$(notdir $(_ECSOURCES2)))))
COBJECTS3 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(C),$(notdir $(_ECSOURCES3)))))

SYMBOLS = $(SYMBOLS1) $(SYMBOLS2) $(SYMBOLS3)
SYMBOLS1 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(S),$(notdir $(_ECSOURCES1)))))
SYMBOLS2 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(S),$(notdir $(_ECSOURCES2)))))
SYMBOLS3 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(S),$(notdir $(_ECSOURCES3)))))

IMPORTS = $(IMPORTS1) $(IMPORTS2) $(IMPORTS3)
IMPORTS1 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(I),$(notdir $(_ECSOURCES1)))))
IMPORTS2 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(I),$(notdir $(_ECSOURCES2)))))
IMPORTS3 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(I),$(notdir $(_ECSOURCES3)))))

ECOBJECTS = $(ECOBJECTS1) $(ECOBJECTS2) $(ECOBJECTS3)
ECOBJECTS1 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(O),$(notdir $(_ECSOURCES1)))))
ECOBJECTS2 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(O),$(notdir $(_ECSOURCES2)))))
ECOBJECTS3 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(O),$(notdir $(_ECSOURCES3)))))

BOWLS = $(BOWLS1) $(BOWLS2) $(BOWLS3)
BOWLS1 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(B),$(notdir $(_ECSOURCES1)))))
BOWLS2 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(B),$(notdir $(_ECSOURCES2)))))
BOWLS3 = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(B),$(notdir $(_ECSOURCES3)))))

_OBJECTS = \
	$(OBJ)File.c.o \
	$(OBJ)DualPipe.c.o \
	$(OBJ)System.c.o \
	$(if $(DISABLE_GL),,$(OBJ)cc$(O)) \
	$(if $(DISABLE_GL),,$(OBJ)ccstr$(O)) \
	$(if $(DISABLE_GL),,$(OBJ)mm$(O)) \
	$(OBJ)mmhash$(O) \
	$(OBJ)instance.c.o

OBJECTS = $(_OBJECTS) $(ECOBJECTS) $(OBJ)$(MODULE).main$(O)

SOURCES = $(ECSOURCES) \
	src/files/File.c \
	src/files/DualPipe.c \
	src/files/System.c \
	src/containers/cc/cc.c \
	src/containers/cc/ccstr.c \
	src/containers/cc/mm.c \
	src/containers/cc/mmhash.c \
	src/types/instance.c

RESOURCES = $(RESOURCES1)
RESOURCES1 = \
	$(RES)unicode/derivedGeneralCategoryStripped.txt \
	$(RES)unicode/derivedCombiningClassStripped.txt \
	$(RES)unicode/caseFoldingStripped.txt \
	$(RES)unicode/decompositionMappings.txt \
	$(RES)unicode/diacriticFolding.txt \
	$(RES)unicode/katakanaFolding.txt \
	locale/es.mo \
	locale/hu.mo \
	locale/mr.mo \
	locale/nl.mo \
	locale/pt_BR.mo \
	locale/ru.mo \
	locale/zh_CN.mo

LIBS += $(SHAREDLIB) $(EXECUTABLE) $(LINKOPT)

ifndef STATIC_LIBRARY_TARGET
LIBS += \
	$(call _L,z)

OFLAGS += $(if $(ENABLE_PYTHON_RPATHS),-Wl$(comma)-rpath='$$ORIGIN',)
OFLAGS += $(RPATHS_FOR_PORTABLE_BINARIES)
endif

# Careful to keep ../deps/glext as -isystem instead of generated -I
PRJ_CFLAGS += \
	 $(if $(WINDOWS_TARGET), \
			 -I../deps/zlib-1.2.8) \
	 $(if $(DEBUG), -g, -O2 -ffast-math) $(FPIC) -w \
			 -DBUILDING_ECRT \
			 $(FVISIBILITY)

CUSTOM1_PRJ_CFLAGS = \
	 $(if $(LINUX_TARGET), \
			 -D_FILE_OFFSET_BITS=64,) \
	 $(PRJ_CFLAGS)

CUSTOM2_PRJ_CFLAGS = \
			 -DECRT_MODULE \
	 $(PRJ_CFLAGS)

CUSTOM3_PRJ_CFLAGS = \
			 -Isrc/containers/cc \
	 $(PRJ_CFLAGS)

CUSTOM5_PRJ_CFLAGS = \
			 -Isrc/containers/cc \
	 $(CUSTOM2_PRJ_CFLAGS)

ECFLAGS += -module $(MODULE)
ECFLAGS += \
	 -nolinenumbers -defaultns eC

# PLATFORM-SPECIFIC OPTIONS

ifdef WINDOWS_TARGET

ifndef STATIC_LIBRARY_TARGET
OFLAGS += \
	 -L../deps/zlib-1.2.8/obj/release.$(PLATFORM)$(COMPILER_SUFFIX)

LIBS += \
	$(call _L,winmm) \
	$(call _L,kernel32) \
	$(call _L,user32) \
	$(call _L,mpr) \
	$(call _L,advapi32) \
	$(call _L,shell32)

endif

else
ifdef LINUX_TARGET

ifndef STATIC_LIBRARY_TARGET
ifneq ($(ARCH),x32)
# $(warning ARCH: $(ARCH) -- adding -Wl,--wrap=fcntl64 to OFLAGS)
OFLAGS += \
	 -Wl,--wrap=fcntl64
endif
OFLAGS +=

LIBS += \
	$(call _L,pthread) \
	$(call _L,m) \
	$(call _L,dl)

endif

else
ifdef OSX_TARGET

ifndef STATIC_LIBRARY_TARGET
OFLAGS +=

LIBS += \
	$(call _L,pthread) \
	$(call _L,m) \
	$(call _L,dl)

endif

endif
endif
endif

CECFLAGS += -cpp $(_CPP)

# TARGETS

all: objdir $(TARGET)

objdir:
	$(call mkdir,$(OBJ))

$(OBJ)$(MODULE).main.ec: $(SYMBOLS) $(COBJECTS)
	@$(call rm,$(OBJ)symbols.lst)
	@$(call touch,$(OBJ)symbols.lst)
	$(call addtolistfile,$(SYMBOLS1),$(OBJ)symbols.lst)
	$(call addtolistfile,$(SYMBOLS2),$(OBJ)symbols.lst)
	$(call addtolistfile,$(SYMBOLS3),$(OBJ)symbols.lst)
	$(call addtolistfile,$(IMPORTS1),$(OBJ)symbols.lst)
	$(call addtolistfile,$(IMPORTS2),$(OBJ)symbols.lst)
	$(call addtolistfile,$(IMPORTS3),$(OBJ)symbols.lst)
	$(ECS) $(ARCH_FLAGS) $(ECSLIBOPT) @$(OBJ)symbols.lst -symbols obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX) -o $(OBJ)$(MODULE).main.ec

$(OBJ)$(MODULE).main.c: $(OBJ)$(MODULE).main.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c $(OBJ)$(MODULE).main.ec -o $(OBJ)$(MODULE).main.sym -symbols $(OBJ)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c $(OBJ)$(MODULE).main.ec -o $(OBJ)$(MODULE).main.c -symbols $(OBJ)

$(SYMBOLS): | objdir
$(OBJECTS): | objdir

nores: $(SOURCES) $(RESOURCES) $(SYMBOLS) $(OBJECTS) | objdir
ifndef STATIC_LIBRARY_TARGET
	$(CC) $(OFLAGS) $(OBJECTS) $(LIBS) -o $(TARGET) $(INSTALLNAME)
ifndef NOSTRIP
	$(STRIP) $(STRIPOPT) $(TARGET)
endif
ifdef WINDOWS_TARGET
	$(call cp,$(TARGET),../bootstrap/obj/bin.$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/)
endif
else
	$(AR) rcs $(TARGET) $(OBJECTS) $(LIBS)
endif
	$(call cp,$(TARGET),../$(HOST_SODESTDIR))
ifdef SHARED_LIBRARY_TARGET
ifdef LINUX_HOST
ifndef SKIP_SONAME
	$(if $(basename $(VER)),ln -sf $(LP)$(MODULE)$(SO)$(VER) ../$(HOST_SODESTDIR)$(LP)$(MODULE)$(SO)$(basename $(VER)),)
	$(if $(VER),ln -sf $(LP)$(MODULE)$(SO)$(VER) ../$(HOST_SODESTDIR)$(LP)$(MODULE)$(SO),)
endif
endif
endif

$(TARGET): $(SOURCES) $(RESOURCES) $(SYMBOLS) $(OBJECTS) | objdir
	@$(call rm,$(OBJ)objects.lst)
	@$(call touch,$(OBJ)objects.lst)
	$(call addtolistfile,$(_OBJECTS),$(OBJ)objects.lst)
	$(call addtolistfile,$(OBJ)$(MODULE).main$(O),$(OBJ)objects.lst)
	$(call addtolistfile,$(ECOBJECTS1),$(OBJ)objects.lst)
	$(call addtolistfile,$(ECOBJECTS2),$(OBJ)objects.lst)
	$(call addtolistfile,$(ECOBJECTS3),$(OBJ)objects.lst)
	$(call addtolistfile,$(ECOBJECTS4),$(OBJ)objects.lst)
ifndef STATIC_LIBRARY_TARGET
	$(CC) $(OFLAGS) @$(OBJ)objects.lst $(LIBS) -o $(TARGET) $(SONAME) $(INSTALLNAME)
ifndef NOSTRIP
	$(STRIP) $(STRIPOPT) $(TARGET)
endif
	$(EAR) aw$(EARFLAGS) $(TARGET) $(RES)unicode/derivedGeneralCategoryStripped.txt $(RES)unicode/derivedCombiningClassStripped.txt $(RES)unicode/caseFoldingStripped.txt $(RES)unicode/decompositionMappings.txt $(RES)unicode/diacriticFolding.txt $(RES)unicode/katakanaFolding.txt "unicode"
	$(EAR) aw$(EARFLAGS) $(TARGET) locale/es.mo locale/hu.mo locale/mr.mo locale/nl.mo locale/pt_BR.mo locale/ru.mo locale/zh_CN.mo "locale"
else
ifdef WINDOWS_HOST
	$(AR) rcs $(TARGET) @$(OBJ)objects.lst $(LIBS)
else
	$(AR) rcs $(TARGET) $(OBJECTS) $(LIBS)
endif
endif
	$(call mkdir,../$(SODESTDIR))
	$(call cp,$(TARGET),../$(SODESTDIR))
ifdef SHARED_LIBRARY_TARGET
ifdef LINUX_TARGET
ifdef LINUX_HOST
ifndef SKIP_SONAME
	$(if $(basename $(VER)),ln -sf $(LP)$(MODULE)$(SO)$(VER) $(OBJ)$(LP)$(MODULE)$(SO)$(basename $(VER)),)
	$(if $(basename $(basename $(VER))),ln -sf $(LP)$(MODULE)$(SO)$(VER) $(OBJ)$(LP)$(MODULE)$(SO)$(basename $(basename $(VER))),)
	$(if $(VER),ln -sf $(LP)$(MODULE)$(SO)$(VER) $(OBJ)$(LP)$(MODULE)$(SO),)
	$(if $(basename $(VER)),ln -sf $(LP)$(MODULE)$(SO)$(VER) ../$(SODESTDIR)$(LP)$(MODULE)$(SO)$(basename $(VER)),)
	$(if $(basename $(basename $(VER))),ln -sf $(LP)$(MODULE)$(SO)$(VER) ../$(SODESTDIR)$(LP)$(MODULE)$(SO)$(basename $(basename $(VER))),)
	$(if $(VER),ln -sf $(LP)$(MODULE)$(SO)$(VER) ../$(SODESTDIR)$(LP)$(MODULE)$(SO),)
endif
endif
endif
endif

# SYMBOL RULES

$(OBJ)Archive.sym: src/files/Archive.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/Archive.ec -o $(OBJ)Archive.sym

$(OBJ)BufferedFile.sym: src/files/BufferedFile.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/BufferedFile.ec -o $(OBJ)BufferedFile.sym

$(OBJ)Date.sym: src/time/Date.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/time/Date.ec -o $(OBJ)Date.sym

$(OBJ)DualPipe.sym: src/files/DualPipe.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/DualPipe.ec -o $(OBJ)DualPipe.sym

$(OBJ)EARArchive.sym: src/files/EARArchive.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/EARArchive.ec -o $(OBJ)EARArchive.sym

$(OBJ)File.sym: src/files/File.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/files/File.ec -o $(OBJ)File.sym

$(OBJ)FileMonitor.sym: src/files/FileMonitor.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/FileMonitor.ec -o $(OBJ)FileMonitor.sym

$(OBJ)GlobalAppSettings.sym: src/json/GlobalAppSettings.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/json/GlobalAppSettings.ec -o $(OBJ)GlobalAppSettings.sym

$(OBJ)JSON.sym: src/json/JSON.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/json/JSON.ec -o $(OBJ)JSON.sym

$(OBJ)JSONGlobalSettings.sym: src/json/JSONGlobalSettings.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/json/JSONGlobalSettings.ec -o $(OBJ)JSONGlobalSettings.sym

$(OBJ)fieldValue.sym: src/types/fieldValue.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/types/fieldValue.ec -o $(OBJ)fieldValue.sym

$(OBJ)memory.sym: src/types/memory.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/types/memory.ec -o $(OBJ)memory.sym

$(OBJ)Mutex.sym: src/mt/Mutex.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/mt/Mutex.ec -o $(OBJ)Mutex.sym

$(OBJ)Semaphore.sym: src/mt/Semaphore.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/mt/Semaphore.ec -o $(OBJ)Semaphore.sym

$(OBJ)System.sym: src/files/System.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/System.ec -o $(OBJ)System.sym

$(OBJ)TempFile.sym: src/files/TempFile.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/TempFile.ec -o $(OBJ)TempFile.sym

$(OBJ)Thread.sym: src/mt/Thread.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/mt/Thread.ec -o $(OBJ)Thread.sym

$(OBJ)Time.sym: src/time/Time.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/time/Time.ec -o $(OBJ)Time.sym

$(OBJ)unicode.sym: src/i18n/unicode.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/i18n/unicode.ec -o $(OBJ)unicode.sym

$(OBJ)units.sym: src/types/units.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/types/units.ec -o $(OBJ)units.sym

$(OBJ)i18n.sym: src/i18n/i18n.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/i18n/i18n.ec -o $(OBJ)i18n.sym

$(OBJ)Condition.sym: src/mt/Condition.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/mt/Condition.ec -o $(OBJ)Condition.sym

$(OBJ)Array.sym: src/containers/Array.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/Array.ec -o $(OBJ)Array.sym

$(OBJ)AVLTree.sym: src/containers/AVLTree.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/AVLTree.ec -o $(OBJ)AVLTree.sym

$(OBJ)BuiltInContainer.sym: src/containers/BuiltInContainer.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/BuiltInContainer.ec -o $(OBJ)BuiltInContainer.sym

$(OBJ)Container.sym: src/containers/Container.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/Container.ec -o $(OBJ)Container.sym

$(OBJ)CustomAVLTree.sym: src/containers/CustomAVLTree.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/CustomAVLTree.ec -o $(OBJ)CustomAVLTree.sym

$(OBJ)LinkList.sym: src/containers/LinkList.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/LinkList.ec -o $(OBJ)LinkList.sym

$(OBJ)List.sym: src/containers/List.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/List.ec -o $(OBJ)List.sym

$(OBJ)Map.sym: src/containers/Map.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/Map.ec -o $(OBJ)Map.sym

$(OBJ)HashMap.sym: src/containers/HashMap.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM5_PRJ_CFLAGS) -c src/containers/HashMap.ec -o $(OBJ)HashMap.sym

$(OBJ)HashTable.sym: src/containers/HashTable.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM5_PRJ_CFLAGS) -c src/containers/HashTable.ec -o $(OBJ)HashTable.sym

$(OBJ)BinaryTree.sym: src/containers/legacy/BinaryTree.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/legacy/BinaryTree.ec -o $(OBJ)BinaryTree.sym

$(OBJ)BTNode.sym: src/containers/legacy/BTNode.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/legacy/BTNode.ec -o $(OBJ)BTNode.sym

$(OBJ)dataTypes.sym: src/types/dataTypes.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/types/dataTypes.ec -o $(OBJ)dataTypes.sym

$(OBJ)instance.sym: src/types/instance.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/types/instance.ec -o $(OBJ)instance.sym

$(OBJ)String.sym: src/types/String.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/types/String.ec -o $(OBJ)String.sym

$(OBJ)OldList.sym: src/containers/legacy/OldList.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/legacy/OldList.ec -o $(OBJ)OldList.sym

# C OBJECT RULES

$(OBJ)Archive.c: src/files/Archive.ec $(OBJ)Archive.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/Archive.ec -o $(OBJ)Archive.c -symbols $(OBJ)

$(OBJ)BufferedFile.c: src/files/BufferedFile.ec $(OBJ)BufferedFile.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/BufferedFile.ec -o $(OBJ)BufferedFile.c -symbols $(OBJ)

$(OBJ)Date.c: src/time/Date.ec $(OBJ)Date.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/time/Date.ec -o $(OBJ)Date.c -symbols $(OBJ)

$(OBJ)DualPipe.c: src/files/DualPipe.ec $(OBJ)DualPipe.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/DualPipe.ec -o $(OBJ)DualPipe.c -symbols $(OBJ)

$(OBJ)EARArchive.c: src/files/EARArchive.ec $(OBJ)EARArchive.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/EARArchive.ec -o $(OBJ)EARArchive.c -symbols $(OBJ)

$(OBJ)File.c: src/files/File.ec $(OBJ)File.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/files/File.ec -o $(OBJ)File.c -symbols $(OBJ)

$(OBJ)FileMonitor.c: src/files/FileMonitor.ec $(OBJ)FileMonitor.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/FileMonitor.ec -o $(OBJ)FileMonitor.c -symbols $(OBJ)

$(OBJ)GlobalAppSettings.c: src/json/GlobalAppSettings.ec $(OBJ)GlobalAppSettings.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/json/GlobalAppSettings.ec -o $(OBJ)GlobalAppSettings.c -symbols $(OBJ)

$(OBJ)JSON.c: src/json/JSON.ec $(OBJ)JSON.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/json/JSON.ec -o $(OBJ)JSON.c -symbols $(OBJ)

$(OBJ)JSONGlobalSettings.c: src/json/JSONGlobalSettings.ec $(OBJ)JSONGlobalSettings.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/json/JSONGlobalSettings.ec -o $(OBJ)JSONGlobalSettings.c -symbols $(OBJ)

$(OBJ)fieldValue.c: src/types/fieldValue.ec $(OBJ)fieldValue.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/types/fieldValue.ec -o $(OBJ)fieldValue.c -symbols $(OBJ)

$(OBJ)memory.c: src/types/memory.ec $(OBJ)memory.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/types/memory.ec -o $(OBJ)memory.c -symbols $(OBJ)

$(OBJ)Mutex.c: src/mt/Mutex.ec $(OBJ)Mutex.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/mt/Mutex.ec -o $(OBJ)Mutex.c -symbols $(OBJ)

$(OBJ)Semaphore.c: src/mt/Semaphore.ec $(OBJ)Semaphore.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/mt/Semaphore.ec -o $(OBJ)Semaphore.c -symbols $(OBJ)

$(OBJ)System.c: src/files/System.ec $(OBJ)System.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/System.ec -o $(OBJ)System.c -symbols $(OBJ)

$(OBJ)TempFile.c: src/files/TempFile.ec $(OBJ)TempFile.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/files/TempFile.ec -o $(OBJ)TempFile.c -symbols $(OBJ)

$(OBJ)Thread.c: src/mt/Thread.ec $(OBJ)Thread.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/mt/Thread.ec -o $(OBJ)Thread.c -symbols $(OBJ)

$(OBJ)Time.c: src/time/Time.ec $(OBJ)Time.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/time/Time.ec -o $(OBJ)Time.c -symbols $(OBJ)

$(OBJ)unicode.c: src/i18n/unicode.ec $(OBJ)unicode.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/i18n/unicode.ec -o $(OBJ)unicode.c -symbols $(OBJ)

$(OBJ)units.c: src/types/units.ec $(OBJ)units.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/types/units.ec -o $(OBJ)units.c -symbols $(OBJ)

$(OBJ)i18n.c: src/i18n/i18n.ec $(OBJ)i18n.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/i18n/i18n.ec -o $(OBJ)i18n.c -symbols $(OBJ)

$(OBJ)Condition.c: src/mt/Condition.ec $(OBJ)Condition.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c src/mt/Condition.ec -o $(OBJ)Condition.c -symbols $(OBJ)

$(OBJ)cc$(O): src/containers/cc/cc.c
	$(CC) $(CFLAGS) $(CUSTOM3_PRJ_CFLAGS) -c $(call quote_path,src/containers/cc/cc.c) -o $(call quote_path,$@)

$(OBJ)ccstr$(O): src/containers/cc/ccstr.c
	$(CC) $(CFLAGS) $(CUSTOM3_PRJ_CFLAGS) -c $(call quote_path,src/containers/cc/ccstr.c) -o $(call quote_path,$@)

$(OBJ)mmhash$(O): src/containers/cc/mmhash.c
	$(CC) $(CFLAGS) $(CUSTOM3_PRJ_CFLAGS) -c $(call quote_path,src/containers/cc/mmhash.c) -o $(call quote_path,$@)

$(OBJ)mm$(O): src/containers/cc/mm.c
	$(CC) $(CFLAGS) $(CUSTOM3_PRJ_CFLAGS) -c $(call quote_path,src/containers/cc/mm.c) -o $(call quote_path,$@)

$(OBJ)Array.c: src/containers/Array.ec $(OBJ)Array.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/Array.ec -o $(OBJ)Array.c -symbols $(OBJ)

$(OBJ)AVLTree.c: src/containers/AVLTree.ec $(OBJ)AVLTree.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/AVLTree.ec -o $(OBJ)AVLTree.c -symbols $(OBJ)

$(OBJ)BuiltInContainer.c: src/containers/BuiltInContainer.ec $(OBJ)BuiltInContainer.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/BuiltInContainer.ec -o $(OBJ)BuiltInContainer.c -symbols $(OBJ)

$(OBJ)Container.c: src/containers/Container.ec $(OBJ)Container.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/Container.ec -o $(OBJ)Container.c -symbols $(OBJ)

$(OBJ)CustomAVLTree.c: src/containers/CustomAVLTree.ec $(OBJ)CustomAVLTree.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/CustomAVLTree.ec -o $(OBJ)CustomAVLTree.c -symbols $(OBJ)

$(OBJ)LinkList.c: src/containers/LinkList.ec $(OBJ)LinkList.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/LinkList.ec -o $(OBJ)LinkList.c -symbols $(OBJ)

$(OBJ)List.c: src/containers/List.ec $(OBJ)List.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/List.ec -o $(OBJ)List.c -symbols $(OBJ)

$(OBJ)Map.c: src/containers/Map.ec $(OBJ)Map.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/Map.ec -o $(OBJ)Map.c -symbols $(OBJ)

$(OBJ)HashMap.c: src/containers/HashMap.ec $(OBJ)HashMap.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM5_PRJ_CFLAGS) $(FVISIBILITY) -c src/containers/HashMap.ec -o $(OBJ)HashMap.c -symbols $(OBJ)

$(OBJ)HashTable.c: src/containers/HashTable.ec $(OBJ)HashTable.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM5_PRJ_CFLAGS) $(FVISIBILITY) -c src/containers/HashTable.ec -o $(OBJ)HashTable.c -symbols $(OBJ)

$(OBJ)BinaryTree.c: src/containers/legacy/BinaryTree.ec $(OBJ)BinaryTree.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/legacy/BinaryTree.ec -o $(OBJ)BinaryTree.c -symbols $(OBJ)

$(OBJ)BTNode.c: src/containers/legacy/BTNode.ec $(OBJ)BTNode.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/legacy/BTNode.ec -o $(OBJ)BTNode.c -symbols $(OBJ)

$(OBJ)dataTypes.c: src/types/dataTypes.ec $(OBJ)dataTypes.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/types/dataTypes.ec -o $(OBJ)dataTypes.c -symbols $(OBJ)

$(OBJ)instance.c: src/types/instance.ec $(OBJ)instance.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/types/instance.ec -o $(OBJ)instance.c -symbols $(OBJ)

$(OBJ)String.c: src/types/String.ec $(OBJ)String.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/types/String.ec -o $(OBJ)String.c -symbols $(OBJ)

$(OBJ)OldList.c: src/containers/legacy/OldList.ec $(OBJ)OldList.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/containers/legacy/OldList.ec -o $(OBJ)OldList.c -symbols $(OBJ)

# OBJECT RULES

$(OBJ)Archive.o: $(OBJ)Archive.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)Archive.c -o $(OBJ)Archive.o

$(OBJ)BufferedFile.o: $(OBJ)BufferedFile.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)BufferedFile.c -o $(OBJ)BufferedFile.o

$(OBJ)Date.o: $(OBJ)Date.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)Date.c -o $(OBJ)Date.o

$(OBJ)DualPipe.o: $(OBJ)DualPipe.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)DualPipe.c -o $(OBJ)DualPipe.o

$(OBJ)EARArchive.o: $(OBJ)EARArchive.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)EARArchive.c -o $(OBJ)EARArchive.o

$(OBJ)File.o: $(OBJ)File.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c $(OBJ)File.c -o $(OBJ)File.o

$(OBJ)FileMonitor.o: $(OBJ)FileMonitor.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)FileMonitor.c -o $(OBJ)FileMonitor.o

$(OBJ)GlobalAppSettings.o: $(OBJ)GlobalAppSettings.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)GlobalAppSettings.c -o $(OBJ)GlobalAppSettings.o

$(OBJ)JSON.o: $(OBJ)JSON.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)JSON.c -o $(OBJ)JSON.o

$(OBJ)JSONGlobalSettings.o: $(OBJ)JSONGlobalSettings.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)JSONGlobalSettings.c -o $(OBJ)JSONGlobalSettings.o

$(OBJ)fieldValue.o: $(OBJ)fieldValue.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)fieldValue.c -o $(OBJ)fieldValue.o

$(OBJ)memory.o: $(OBJ)memory.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)memory.c -o $(OBJ)memory.o

$(OBJ)Mutex.o: $(OBJ)Mutex.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)Mutex.c -o $(OBJ)Mutex.o

$(OBJ)Semaphore.o: $(OBJ)Semaphore.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)Semaphore.c -o $(OBJ)Semaphore.o

$(OBJ)System.o: $(OBJ)System.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)System.c -o $(OBJ)System.o

$(OBJ)TempFile.o: $(OBJ)TempFile.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)TempFile.c -o $(OBJ)TempFile.o

$(OBJ)Thread.o: $(OBJ)Thread.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)Thread.c -o $(OBJ)Thread.o

$(OBJ)Time.o: $(OBJ)Time.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)Time.c -o $(OBJ)Time.o

$(OBJ)unicode.o: $(OBJ)unicode.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)unicode.c -o $(OBJ)unicode.o

$(OBJ)units.o: $(OBJ)units.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)units.c -o $(OBJ)units.o

$(OBJ)File.c.o: src/files/File.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/files/File.c -o $(OBJ)File.c.o

$(OBJ)DualPipe.c.o: src/files/DualPipe.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c src/files/DualPipe.c -o $(OBJ)DualPipe.c.o

$(OBJ)System.c.o: src/files/System.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c src/files/System.c -o $(OBJ)System.c.o

$(OBJ)i18n.o: $(OBJ)i18n.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)i18n.c -o $(OBJ)i18n.o

$(OBJ)Condition.o: $(OBJ)Condition.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)Condition.c -o $(OBJ)Condition.o

$(OBJ)Array.o: $(OBJ)Array.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)Array.c -o $(OBJ)Array.o

$(OBJ)AVLTree.o: $(OBJ)AVLTree.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)AVLTree.c -o $(OBJ)AVLTree.o

$(OBJ)BuiltInContainer.o: $(OBJ)BuiltInContainer.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)BuiltInContainer.c -o $(OBJ)BuiltInContainer.o

$(OBJ)Container.o: $(OBJ)Container.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)Container.c -o $(OBJ)Container.o

$(OBJ)CustomAVLTree.o: $(OBJ)CustomAVLTree.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)CustomAVLTree.c -o $(OBJ)CustomAVLTree.o

$(OBJ)LinkList.o: $(OBJ)LinkList.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)LinkList.c -o $(OBJ)LinkList.o

$(OBJ)List.o: $(OBJ)List.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)List.c -o $(OBJ)List.o

$(OBJ)Map.o: $(OBJ)Map.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)Map.c -o $(OBJ)Map.o

$(OBJ)HashMap$(O): $(OBJ)HashMap.c
	$(CC) $(CFLAGS) $(CUSTOM5_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)HashMap.c -o $(OBJ)HashMap.o

$(OBJ)HashTable$(O): $(OBJ)HashTable.c
	$(CC) $(CFLAGS) $(CUSTOM5_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)HashTable.c -o $(OBJ)HashTable.o

$(OBJ)BinaryTree.o: $(OBJ)BinaryTree.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)BinaryTree.c -o $(OBJ)BinaryTree.o

$(OBJ)BTNode.o: $(OBJ)BTNode.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)BTNode.c -o $(OBJ)BTNode.o

$(OBJ)dataTypes.o: $(OBJ)dataTypes.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)dataTypes.c -o $(OBJ)dataTypes.o

$(OBJ)instance.o: $(OBJ)instance.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)instance.c -o $(OBJ)instance.o

$(OBJ)String.o: $(OBJ)String.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)String.c -o $(OBJ)String.o

$(OBJ)OldList.o: $(OBJ)OldList.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c $(OBJ)OldList.c -o $(OBJ)OldList.o

$(OBJ)instance.c.o: src/types/instance.c
	$(CC) $(CFLAGS) $(CUSTOM2_PRJ_CFLAGS) -c src/types/instance.c -o $(OBJ)instance.c.o

$(OBJ)$(MODULE).main$(O): $(OBJ)$(MODULE).main.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c $(OBJ)$(MODULE).main.c -o $(OBJ)$(MODULE).main$(O)

cleanecrttarget:
	$(call rm,$(TARGET))

cleantarget:
	$(call rm,$(OBJ)$(MODULE).main.o $(OBJ)$(MODULE).main.c $(OBJ)$(MODULE).main.ec $(OBJ)$(MODULE).main$(I) $(OBJ)$(MODULE).main$(S))
	$(call rm,$(OBJ)symbols.lst)
	$(call rm,$(OBJ)objects.lst)
	$(call rm,$(TARGET))
ifdef SHARED_LIBRARY_TARGET
ifdef LINUX_TARGET
ifdef LINUX_HOST
ifndef SKIP_SONAME
	$(call rm,$(OBJ)$(LP)$(MODULE)$(SO)$(basename $(VER)))
	$(call rm,$(OBJ)$(LP)$(MODULE)$(SO))
endif
endif
endif
endif
	$(_MAKE) -f Makefile.static cleantarget

clean: cleantarget
	$(call rm,$(_OBJECTS))
	$(call rm,$(ECOBJECTS1))
	$(call rm,$(ECOBJECTS2))
	$(call rm,$(ECOBJECTS3))
	$(call rm,$(COBJECTS1))
	$(call rm,$(COBJECTS2))
	$(call rm,$(COBJECTS3))
	$(call rm,$(BOWLS1))
	$(call rm,$(BOWLS2))
	$(call rm,$(BOWLS3))
	$(call rm,$(IMPORTS1))
	$(call rm,$(IMPORTS2))
	$(call rm,$(IMPORTS3))
	$(call rm,$(SYMBOLS1))
	$(call rm,$(SYMBOLS2))
	$(call rm,$(SYMBOLS3))
	$(_MAKE) -f Makefile.static clean

realclean: cleantarget
	$(call rmr,$(OBJ))
	$(_MAKE) -f Makefile.static realclean

wipeclean:
	$(call rmr,obj/)

distclean:
	$(_MAKE) -f $(_CF_DIR)Cleanfile distclean distclean_all_subdirs

$(MAKEFILE_LIST): ;
$(SOURCES): ;
$(RESOURCES): ;

#troubleshoot:
#	@$(call echo,OBJECTS = $(OBJECTS))
