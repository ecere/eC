ifneq ($(V),1)
.SILENT:
endif

.PHONY: bindir ecrt ectp ecp ecc ecs cleantarget clean realclean wipeclean distclean

OBJ = obj/bin.$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/

_CF_DIR = ../

include $(_CF_DIR)crossplatform.mk
include $(_CF_DIR)default.cf

.NOTPARALLEL: $(NOT_PARALLEL_TARGETS)

all: bindir ecrt ectp ecp ecc ecs
	$(call cp,ecp/obj/bootstrap.$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/ecp$(B32_SFX)$(E) ecc/obj/bootstrap.$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/ecc$(B32_SFX)$(E) ecs/obj/bootstrap.$(PLATFORM)$(COMPILER_SUFFIX)$(DEBUG_SUFFIX)/ecs$(B32_SFX)$(E),$(OBJ))
	@$(call echo,All done!)

bindir:
	$(call mkdir,$(OBJ))

ecrt:
	@$(call echo,Building eC runtime library...)
	+cd ecrt && $(_MAKE)

ectp:
	@$(call echo,Building eC transpiler library...)
	+cd ectp && $(_MAKE)

ecp: ecrt ectp
	@$(call echo,Building eC precompiler...)
	+cd ecp && $(_MAKE)

ecc: ecrt ectp
	@$(call echo,Building eC compiler...)
	+cd ecc && $(_MAKE)

ecs: ecrt ectp
	@$(call echo,Building eC symbol generator...)
	+cd ecs && $(_MAKE)

cleantarget:
	$(call rm,$(OBJ)ecp$(B32_SFX)$(E) $(OBJ)ecc$(B32_SFX)$(E) $(OBJ)ecs$(B32_SFX)$(E))
ifdef WINDOWS_TARGET
	$(call rm,$(OBJ)$(LP)ecrt$(SO) $(OBJ)$(LP)ec$(SO))
endif

clean: cleantarget
	+cd ecrt && $(_MAKE) clean
	+cd ectp && $(_MAKE) clean
	+cd ecp && $(_MAKE) clean
	+cd ecc && $(_MAKE) clean
	+cd ecs && $(_MAKE) clean

realclean: cleantarget
	$(call rmr,$(OBJ))
	+cd ecrt && $(_MAKE) realclean
	+cd ectp && $(_MAKE) realclean
	+cd ecp && $(_MAKE) realclean
	+cd ecc && $(_MAKE) realclean
	+cd ecs && $(_MAKE) realclean

wipeclean:
	$(call rmr,obj/)
	+cd ecrt && $(_MAKE) wipeclean
	+cd ectp && $(_MAKE) wipeclean
	+cd ecp && $(_MAKE) wipeclean
	+cd ecc && $(_MAKE) wipeclean
	+cd ecs && $(_MAKE) wipeclean

distclean:
	$(_MAKE) -f $(_CF_DIR)Cleanfile distclean distclean_all_subdirs

$(MAKEFILE_LIST): ;
$(SOURCES): ;
$(RESOURCES): ;
