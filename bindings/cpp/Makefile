.PHONY: all clean realclean distclean ecrt_cpp

EC_SDK_SRC := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))../../

_CF_DIR = $(EC_SDK_SRC)/
include $(_CF_DIR)crossplatform.mk

# TARGETS

all: ecrt_cpp dggal_cpp

ecrt_cpp:
	+$(_MAKE) -f Makefile.ecrt_cpp

clean:
	+$(_MAKE) -f Makefile.ecrt_cpp clean
	
realclean:
	+$(_MAKE) -f Makefile.ecrt_cpp realclean

distclean:
	+$(_MAKE) -f Makefile.ecrt_cpp distclean
