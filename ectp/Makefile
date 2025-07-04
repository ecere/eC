ifneq ($(V),1)
.SILENT:
endif

.PHONY: all objdir cleantarget clean realclean wipeclean distclean

# CORE VARIABLES

MODULE := ectp
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

# POST-INCLUDES VARIABLES

OBJ = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/

RES =

TARGET = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/$(LP)ectp$(SO)
SONAME =
ifndef SKIP_SONAME
ifdef LINUX_TARGET
TARGET = obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/$(LP)ectp$(SO).0.0.1
SONAME = -Wl,-soname,libectp.so.0
endif
endif

_ECSOURCES = \
	src/ast.ec \
	src/copy.ec \
	src/dbpass.ec \
	src/ecdefs.ec \
	src/expression.ec \
	src/firstPass.ec \
	src/freeAst.ec \
	src/grammar.ec \
	src/lexer.ec \
	src/loadSymbols.ec \
	src/output.ec \
	src/pass0.ec \
	src/pass1.ec \
	src/pass15.ec \
	src/pass16.ec \
	src/pass2.ec \
	src/pass3.ec \
	src/shortcuts.ec \
	src/type.ec

ECSOURCES = $(call shwspace,$(_ECSOURCES))

COBJECTS = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(C),$(notdir $(_ECSOURCES)))))

SYMBOLS = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(S),$(notdir $(_ECSOURCES)))))

IMPORTS = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(I),$(notdir $(_ECSOURCES)))))

ECOBJECTS = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(O),$(notdir $(_ECSOURCES)))))

BOWLS = $(call shwspace,$(addprefix $(OBJ),$(patsubst %.ec,%$(B),$(notdir $(_ECSOURCES)))))

_OBJECTS = \
	$(OBJ)bsl.o

OBJECTS = $(_OBJECTS) $(ECOBJECTS) $(OBJ)$(MODULE).main$(O)

SOURCES = $(ECSOURCES) \
	../bootstrap/bsl.c

RESOURCES = \
	locale/es.mo \
	locale/mr.mo \
	locale/zh_CN.mo

LIBS += $(SHAREDLIB) $(EXECUTABLE) $(LINKOPT)

ifndef STATIC_LIBRARY_TARGET
LIBS += \
	$(call _L,ecrt)
ifdef OSX_TARGET
OFLAGS += $(if $(ENABLE_PYTHON_RPATHS),-Wl$(comma)-rpath$(comma)'@loader_path',)
else
OFLAGS += $(if $(ENABLE_PYTHON_RPATHS),-Wl$(comma)-rpath='$$ORIGIN',)
endif
OFLAGS += $(RPATHS_FOR_PORTABLE_BINARIES)
endif

PRJ_CFLAGS += \
	 $(if $(DEBUG), -g, -O2 -ffast-math) $(FPIC) -Wall

CUSTOM1_PRJ_CFLAGS = \
			 -I../bootstrap/include \
	 $(PRJ_CFLAGS)

ECFLAGS += -module $(MODULE)
ECFLAGS += \
	 -nolinenumbers

CECFLAGS += -cpp $(_CPP)

ifndef STATIC_LIBRARY_TARGET
OFLAGS += \
	 -L../obj/$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/bin \
	 -L../obj/$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/lib
endif

# TARGETS

all: objdir $(TARGET)

objdir:
	$(call mkdir,$(OBJ))

$(OBJ)$(MODULE).main.ec: $(SYMBOLS) $(COBJECTS)
	$(ECS) $(ARCH_FLAGS) $(ECSLIBOPT) $(SYMBOLS) $(IMPORTS) -symbols obj/$(CONFIG).$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX) -o $(OBJ)$(MODULE).main.ec

$(OBJ)$(MODULE).main.c: $(OBJ)$(MODULE).main.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) -c $(OBJ)$(MODULE).main.ec -o $(OBJ)$(MODULE).main.sym -symbols $(OBJ)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)$(MODULE).main.ec -o $(OBJ)$(MODULE).main.c -symbols $(OBJ)

$(SYMBOLS): | objdir
$(OBJECTS): | objdir
$(TARGET): $(SOURCES) $(RESOURCES) $(SYMBOLS) $(OBJECTS) | objdir
ifndef STATIC_LIBRARY_TARGET
	$(CC) $(OFLAGS) $(OBJECTS) $(LIBS) -o $(TARGET) $(SONAME) $(INSTALLNAME)
ifdef OSX_TARGET
	install_name_tool -id @rpath/lib$(MODULE).dylib $(TARGET)
endif
ifndef NOSTRIP
	$(STRIP) $(STRIPOPT) $(TARGET)
endif
	$(EAR) aw$(EARFLAGS) $(TARGET) locale/es.mo locale/mr.mo locale/zh_CN.mo "locale"
else
	$(AR) rcs $(TARGET) $(OBJECTS) $(LIBS)
endif
	$(call cp,$(TARGET),../$(SODESTDIR))
ifndef SKIP_SONAME
ifdef LINUX_TARGET
	ln -sf $(LP)$(MODULE)$(SO).0.0.1 $(OBJ)$(LP)$(MODULE)$(SO).0.0
	ln -sf $(LP)$(MODULE)$(SO).0.0.1 $(OBJ)$(LP)$(MODULE)$(SO).0
	ln -sf $(LP)$(MODULE)$(SO).0.0.1 $(OBJ)$(LP)$(MODULE)$(SO)
	ln -sf $(LP)$(MODULE)$(SO).0.0.1 ../$(SODESTDIR)$(LP)$(MODULE)$(SO).0.0
	ln -sf $(LP)$(MODULE)$(SO).0.0.1 ../$(SODESTDIR)$(LP)$(MODULE)$(SO).0
	ln -sf $(LP)$(MODULE)$(SO).0.0.1 ../$(SODESTDIR)$(LP)$(MODULE)$(SO)
endif
endif
ifdef WINDOWS_TARGET
ifndef CROSS_TARGET
	$(call cp,$(TARGET),../bootstrap/obj/bin.$(HOST_PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/)
endif
endif

# SYMBOL RULES

$(OBJ)ast.sym: src/ast.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/ast.ec -o $(OBJ)ast.sym

$(OBJ)copy.sym: src/copy.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/copy.ec -o $(OBJ)copy.sym

$(OBJ)dbpass.sym: src/dbpass.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/dbpass.ec -o $(OBJ)dbpass.sym

$(OBJ)ecdefs.sym: src/ecdefs.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/ecdefs.ec -o $(OBJ)ecdefs.sym

$(OBJ)expression.sym: src/expression.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/expression.ec -o $(OBJ)expression.sym

$(OBJ)firstPass.sym: src/firstPass.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/firstPass.ec -o $(OBJ)firstPass.sym

$(OBJ)freeAst.sym: src/freeAst.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/freeAst.ec -o $(OBJ)freeAst.sym

$(OBJ)grammar.sym: src/grammar.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/grammar.ec -o $(OBJ)grammar.sym

$(OBJ)lexer.sym: src/lexer.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/lexer.ec -o $(OBJ)lexer.sym

$(OBJ)loadSymbols.sym: src/loadSymbols.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/loadSymbols.ec -o $(OBJ)loadSymbols.sym

$(OBJ)output.sym: src/output.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/output.ec -o $(OBJ)output.sym

$(OBJ)pass0.sym: src/pass0.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/pass0.ec -o $(OBJ)pass0.sym

$(OBJ)pass1.sym: src/pass1.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/pass1.ec -o $(OBJ)pass1.sym

$(OBJ)pass15.sym: src/pass15.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/pass15.ec -o $(OBJ)pass15.sym

$(OBJ)pass16.sym: src/pass16.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/pass16.ec -o $(OBJ)pass16.sym

$(OBJ)pass2.sym: src/pass2.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/pass2.ec -o $(OBJ)pass2.sym

$(OBJ)pass3.sym: src/pass3.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/pass3.ec -o $(OBJ)pass3.sym

$(OBJ)shortcuts.sym: src/shortcuts.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/shortcuts.ec -o $(OBJ)shortcuts.sym

$(OBJ)type.sym: src/type.ec
	$(ECP) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) -c src/type.ec -o $(OBJ)type.sym

# C OBJECT RULES

$(OBJ)ast.c: src/ast.ec $(OBJ)ast.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/ast.ec -o $(OBJ)ast.c -symbols $(OBJ)

$(OBJ)copy.c: src/copy.ec $(OBJ)copy.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/copy.ec -o $(OBJ)copy.c -symbols $(OBJ)

$(OBJ)dbpass.c: src/dbpass.ec $(OBJ)dbpass.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/dbpass.ec -o $(OBJ)dbpass.c -symbols $(OBJ)

$(OBJ)ecdefs.c: src/ecdefs.ec $(OBJ)ecdefs.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/ecdefs.ec -o $(OBJ)ecdefs.c -symbols $(OBJ)

$(OBJ)expression.c: src/expression.ec $(OBJ)expression.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/expression.ec -o $(OBJ)expression.c -symbols $(OBJ)

$(OBJ)firstPass.c: src/firstPass.ec $(OBJ)firstPass.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/firstPass.ec -o $(OBJ)firstPass.c -symbols $(OBJ)

$(OBJ)freeAst.c: src/freeAst.ec $(OBJ)freeAst.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/freeAst.ec -o $(OBJ)freeAst.c -symbols $(OBJ)

$(OBJ)grammar.c: src/grammar.ec $(OBJ)grammar.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/grammar.ec -o $(OBJ)grammar.c -symbols $(OBJ)

$(OBJ)lexer.c: src/lexer.ec $(OBJ)lexer.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/lexer.ec -o $(OBJ)lexer.c -symbols $(OBJ)

$(OBJ)loadSymbols.c: src/loadSymbols.ec $(OBJ)loadSymbols.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/loadSymbols.ec -o $(OBJ)loadSymbols.c -symbols $(OBJ)

$(OBJ)output.c: src/output.ec $(OBJ)output.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/output.ec -o $(OBJ)output.c -symbols $(OBJ)

$(OBJ)pass0.c: src/pass0.ec $(OBJ)pass0.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/pass0.ec -o $(OBJ)pass0.c -symbols $(OBJ)

$(OBJ)pass1.c: src/pass1.ec $(OBJ)pass1.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/pass1.ec -o $(OBJ)pass1.c -symbols $(OBJ)

$(OBJ)pass15.c: src/pass15.ec $(OBJ)pass15.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/pass15.ec -o $(OBJ)pass15.c -symbols $(OBJ)

$(OBJ)pass16.c: src/pass16.ec $(OBJ)pass16.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/pass16.ec -o $(OBJ)pass16.c -symbols $(OBJ)

$(OBJ)pass2.c: src/pass2.ec $(OBJ)pass2.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/pass2.ec -o $(OBJ)pass2.c -symbols $(OBJ)

$(OBJ)pass3.c: src/pass3.ec $(OBJ)pass3.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/pass3.ec -o $(OBJ)pass3.c -symbols $(OBJ)

$(OBJ)shortcuts.c: src/shortcuts.ec $(OBJ)shortcuts.sym | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/shortcuts.ec -o $(OBJ)shortcuts.c -symbols $(OBJ)

$(OBJ)type.c: src/type.ec $(if $(wildcard $(PRE)type.c),,$(OBJ)type.sym) | $(SYMBOLS)
	$(ECC) $(CFLAGS) $(CECFLAGS) $(ECFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c src/type.ec -o $(OBJ)type.c -symbols $(OBJ)

# OBJECT RULES

$(OBJ)ast.o: $(OBJ)ast.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)ast.c -o $(OBJ)ast.o

$(OBJ)copy.o: $(OBJ)copy.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)copy.c -o $(OBJ)copy.o

$(OBJ)dbpass.o: $(OBJ)dbpass.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)dbpass.c -o $(OBJ)dbpass.o

$(OBJ)ecdefs.o: $(OBJ)ecdefs.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)ecdefs.c -o $(OBJ)ecdefs.o

$(OBJ)expression.o: $(OBJ)expression.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)expression.c -o $(OBJ)expression.o

$(OBJ)firstPass.o: $(OBJ)firstPass.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)firstPass.c -o $(OBJ)firstPass.o

$(OBJ)freeAst.o: $(OBJ)freeAst.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)freeAst.c -o $(OBJ)freeAst.o

$(OBJ)grammar.o: $(OBJ)grammar.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)grammar.c -o $(OBJ)grammar.o

$(OBJ)lexer.o: $(OBJ)lexer.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)lexer.c -o $(OBJ)lexer.o

$(OBJ)loadSymbols.o: $(OBJ)loadSymbols.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)loadSymbols.c -o $(OBJ)loadSymbols.o

$(OBJ)output.o: $(OBJ)output.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)output.c -o $(OBJ)output.o

$(OBJ)pass0.o: $(OBJ)pass0.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)pass0.c -o $(OBJ)pass0.o

$(OBJ)pass1.o: $(OBJ)pass1.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)pass1.c -o $(OBJ)pass1.o

$(OBJ)pass15.o: $(OBJ)pass15.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)pass15.c -o $(OBJ)pass15.o

$(OBJ)pass16.o: $(OBJ)pass16.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)pass16.c -o $(OBJ)pass16.o

$(OBJ)pass2.o: $(OBJ)pass2.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)pass2.c -o $(OBJ)pass2.o

$(OBJ)pass3.o: $(OBJ)pass3.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)pass3.c -o $(OBJ)pass3.o

$(OBJ)shortcuts.o: $(OBJ)shortcuts.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)shortcuts.c -o $(OBJ)shortcuts.o

$(OBJ)type.o: $(OBJ)type.c
	$(CC) $(CFLAGS) $(CUSTOM1_PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)type.c -o $(OBJ)type.o

$(OBJ)bsl.o: ../bootstrap/bsl.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c ../bootstrap/bsl.c -o $(OBJ)bsl.o

$(OBJ)$(MODULE).main$(O): $(OBJ)$(MODULE).main.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) $(FVISIBILITY) -c $(OBJ)$(MODULE).main.c -o $(OBJ)$(MODULE).main$(O)

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

clean: cleantarget
	$(call rm,$(_OBJECTS))
	$(call rm,$(ECOBJECTS))
	$(call rm,$(COBJECTS))
	$(call rm,$(BOWLS))
	$(call rm,$(IMPORTS))
	$(call rm,$(SYMBOLS))

realclean: cleantarget
	$(call rmr,$(OBJ))

wipeclean:
	$(call rmr,obj/)

distclean:
	$(_MAKE) -f $(_CF_DIR)Cleanfile distclean distclean_all_subdirs

$(MAKEFILE_LIST): ;
$(SOURCES): ;
$(RESOURCES): ;
