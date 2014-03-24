GetSystemInfo module for CMake
===================

CMake is a cross-platform free software program for managing the build process of software using a compiler-independent method. It is designed to support directory hierarchies and applications that depend on multiple libraries, and for use in conjunction with native build environments such as make, Apple's Xcode, and Microsoft Visual Studio. It also has minimal dependencies, requiring only a C++ compiler on its own build system.

Sometimes it is difficult to obtain detailed information about the target and host on different operating systems with different compilers. The main goal of GetSystemInfo is to provide verbose information about everything you might be need in cross-platform developing in one single way.

With using the GetSystemInfo module in your project you will have access to use these new variables in CMake:
* `INFO_C_READEBLE_COMPILER_NAME` - short name of C compiler (e.g. *vc, gcc, clang, pgi, ekopath, sunpro*)
* `INFO_C_READEBLE_FULL_COMPILER_NAME` - verbose name of C compiler
* `INFO_CXX_READEBLE_COMPILER_NAME` - short name of C++ compiler
* `INFO_CXX_READEBLE_FULL_COMPILER_NAME` - verbose name of C++ compiler
* `INFO_COMPILER_SUITE_NAME` - short of compiler suite
* `INFO_COMPILER_FULL_SUITE_NAME` - verbose of compiler suite
* `INFO_C_COMPILER_VERSION` - version of C compiler
* `INFO_CXX_COMPILER_VERSION` - version of C++ compiler
* `INFO_COMPILER_SUITE_VERSION` - version of compiler suite
* `INFO_OS_TARGET_NAME` - name of compilation target (e.g. *Windows, Linux, Cygwin, Darwin, SunOS, BSD*)
* `INFO_OS_TARGET_ARCH` - architecture of compilation target (e.g. *x86, x86_64, ppc, ppc64*)
* `INFO_ENDIANNESS` - endiannes of compilation target (e.g. *Little-Endian, Big-Endian*)
* `INFO_OS_HOST_NAME` - name of compilation host
* `INFO_OS_HOST_ARCH` - architecture of compilation host
* `INFO_OS_HOST_VERSION` - version of compilation host
