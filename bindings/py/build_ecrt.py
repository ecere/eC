import sys
import os
import platform
from distutils.util import get_platform;
from os import path
from cffi import FFI

owd = os.getcwd()

if path.isfile('cffi-ecrt.h'):
   bindings_py_dir = '.'
else:
   bindings_py_dir = path.join('bindings', 'py')
   if not path.isfile(bindings_py_dir):
      bindings_py_dir = path.join(owd, 'eC', 'bindings', 'py')

dnf = path.dirname(__file__)
dir = path.abspath(path.dirname(__file__))

cpath = os.path.normpath(path.join(dnf, '..', 'c'))

incdir = cpath

if path.isdir(cpath) != True:
   print('error: unable to find path to C bindings!')
if path.isfile(path.join(bindings_py_dir, 'cffi-ecrt.h')) != True:
   print('Cannot find cffi-ecrt.h in ', bindings_py_dir)

sysdir = 'win32' if sys.platform == 'win32' else 'linux'
syslibdir = 'bin' if sys.platform == 'win32' else 'lib'
libdir = path.join(bindings_py_dir, '..', '..', 'obj', sysdir, syslibdir)

if dnf != '':
   os.chdir(dir)

sys.path.append(bindings_py_dir)

ffi_ecrt = FFI()
ffi_ecrt.cdef(open(path.join(bindings_py_dir, 'cffi-ecrt.h')).read())
PY_BINDINGS_EMBEDDED_C_DISABLE = os.getenv('PY_BINDINGS_EMBEDDED_C_DISABLE')
_embedded_c = True # False if PY_BINDINGS_EMBEDDED_C_DISABLE == '' else True

srcs = []
if _embedded_c == True:
   srcs.append(path.join(cpath, 'ecrt.c'))

libs = []

libs.append('ecrt')
if _embedded_c == False:
   libs.append('ecrt_c')

# _py* CFFI packages are currently being packaged outside of the main extension directory
extra_link_args = ["-Wl,-rpath,$ORIGIN/lib:$ORIGIN/ecrt/lib" ]
if sys.platform == 'win32':
   extra_link_args.append('-Wl,--export-all-symbols')
else:
   extra_link_args.append('-Wl,--export-dynamic')

ffi_ecrt.set_source('_pyecrt',
               '#include "ecrt.h"',
               sources=srcs,
               define_macros=[('BINDINGS_SHARED', None), ('ECRT_EXPORT', None)],
               extra_compile_args=['-DECPRFX=eC_', '-DMS_WIN64', '-O2'], #--export-dynamic' ]
               include_dirs=[bindings_py_dir, incdir],
               libraries=libs,
               extra_link_args=extra_link_args,
               library_dirs=[libdir],
               py_limited_api=False)
if __name__ == '__main__':
   V = os.getenv('V')
   v = True if V == '1' or V == 'y' else False

   ffi_ecrt.compile(verbose=v,tmpdir='.',debug=False) # True)

if dnf != '':
   os.chdir(owd)
