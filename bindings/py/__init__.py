import os
import sys

# Work around for lack of R(UN)PATH on Windows
if sys.platform.startswith('win'):
   script_dir = os.path.dirname(os.path.abspath(__file__))
   original_path = os.environ.get('PATH', '')
   ecrtLibPath = os.path.join(script_dir, '..', 'ecrt', 'lib')
   new_path = ecrtLibPath + os.pathsep + original_path + os.pathsep
   os.environ['PATH'] = new_path
   if hasattr(os, 'add_dll_directory'):
      os.add_dll_directory(ecrtLibPath)

from .ecrt import *
