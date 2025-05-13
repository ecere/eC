# eC Software Development Kit and Runtime Library

https://ec-lang.org

A stand-alone Software Development Kit and runtime library for the [eC programming language](https://ec-lang.org)

(_part of the [Ecere SDK](https://ecere.org)_)

Copyright (c) 1996-2025, Jérôme Jacovella-St-Louis

Copyright (c) 2005-2025, Ecere Corporation

Licensed under the [BSD 3-Clause License](https://opensource.org/license/bsd-3-clause)

Source: https://github.com/ecere/eC

# The eC Programming Language

eC is a light, expressive and intuitive C Style object-oriented programming language.
eC is a superset of C89 (in _almost_ a strict sense, with few exceptions such as potential clashes with a few new keywords like `class`).
eC compiles natively just like C (currently, the eC compiler transpiles to C code).
C libraries can be used directly and other libraries can invoke C-exported functions and methods in eC code directly through a C API (or through [bgen](https://github.com/ecere/bgen), see below).
The language offers modern object-oriented features such as classes, (single) inheritance, polymorphism, properties, generics, defined expressions, unit types (e.g., _Radians_/_Degrees_, _Meters_/_Feet_) and bit classes.
eC supports automatic symbol resolution across multiple eC source files and libraries, which avoids the need for both prototypes and header files.
Developers with experience programming in C, C++, Java and/or C# should find eC very familiar.
eC also supports reflection with a dynamic object type system and runtime module loading and ejection, facilitating the implementation of plugin systems.
Constructors, destructors and reference counting (semi-automatic through global and member instances) also facilitate memory management.

[Learn more about eC here](https://ec-lang.org/overview/).

[![Ollie-the-sea-otter](https://ec-lang.org/images/eC-256.png)](https://ec-lang.org/)

## Compiler tools

The eC compiler tools include:

- `ecc`, the eC compiler, which currently generates C from eC source files as part of the compilation process, which are then compiled using e.g., GCC or Clang,
- `ecp`, the eC precompiler, generating `.sym` files allowing to automatically resolve symbols across eC source files as an alternative to header files,
- `ecs`, the eC symbol loader generator, writing a `.main.ec` file as part of the linking process which will load the necessary symbols at runtime from dynamic eC modules,
- `ear`, the Ecere archiver, which packs and unpacks files into a simple archive format based on _zlib_, with the ability to embed resources within shared libraries and executables and access them using the eC runtime library as e.g., `<:archive>directory/file.txt`,
- `libecrt`, the eC runtime library provided as a shared library, as well as a static library (libecrtStatic.a),
- `libectp`, the eC transpiler library, a dependency of the `ecc`, `ecp` and `ecs` tools, including the capability to parse eC source code into an abstract syntax tree and convert it to C99 source code using a few GCC extensions.

See also:

- [epj2make](https://github.com/ecere/epj2make) to generate cross-platform GNU Makefiles from Ecere projects (`.epj` JSON files),
- [bgen](https://github.com/ecere/bgen) for automatically generating object-oriented bindings for C, C++ and Python from eC libraries,
- as well as the other components of the [Ecere SDK](https://github.com/ecere/ecere-sdk) such as the Ecere Integrated Development Environment.

## eC runtime functionality

The eC runtime library implements:

- management of eC data types, including the various flavors of structs and classes with and without reference counting, runtime type information, virtual method tables, reflection with the ability to register and define classes at runtime (loading/ejecting new dynamic modules), string management, generic field values containing type information, binary (de)serialization,
- various types of containers (dynamic arrays, hash tables, linked lists, AVL Trees, multiple forms of associative arrays),
- files I/O including temporary files, bidirectional processing input/output pipes, creating/decompressing/accessing files from archives (including resources packed directly within the executables), file/directory monitoring, cross-platform file handling functions,
- multithreading support including threads, mutexes, semaphores and conditions,
- internationalization (extensive unicode support with the Unicode data resources embedded within the library), internationalization of text strings compatible with GNU gettext, i18n of libecrt itself currently including Chinese, Brazilian Portuguese, Spanish, partial Russian translation, as well as the start of other languages,
- date and time handling,
- a JSON parser and writer (with support for automatic JSON (de)serialization of any eC types), as well as utilities to manage application settings stored in JSON files.

See also:

- the [Windowing Platform Abstraction Library](https://github.com/ecere/wpal),
- the [Ecere 2D/3D graphics engine](https://github.com/ecere/gfx),
- as well as the other components of the [Ecere SDK](https://github.com/ecere/ecere-sdk) such as the cross-platform GUI toolkit.

## Documentation

See https://ecere.org/docs/ecere/ecere.html and https://ecere.org/docs/ecereCOM/ecere.html for the API documentation of the core eC runtime library, which covers the `sys` and `com` namespaces of the Ecere runtime library.

[![Tao](https://ecere.com/images/tao.png)](https://ecere.org/tao.pdf)
The [Ecere Tao of Programming](https://ecere.org/tao.pdf) is a Programmer's Guide (still work in progress)
teaching the foundations of the eC programming language, also including a C primer.

See also the [samples](https://github.com/ecere/ecere-sdk/tree/master/samples) provided with the SDK, and some featured projects as prebuilt binaries at https://ecere.org/software.

Reach out on [IRC](https://web.libera.chat/?theme=cli#ecere) - **#ecere** on irc.libera.chat<br>
