#include <stdio.h>

// Platform config with GetSystemInfo
#include "config.h"

#define UNUSED_ARGUMENT(x) (void)x

int main(int argc, char **argv) {
	UNUSED_ARGUMENT(argc);
	UNUSED_ARGUMENT(argv);

	printf("INFO_COMPILER_SUIT_NAME: %s\n", STR_INFO_COMPILER_SUIT_NAME);
	printf("INFO_COMPILER_FULL_SUIT_NAME: %s\n", STR_INFO_COMPILER_FULL_SUIT_NAME);
	printf("INFO_C_COMPILER_VERSION: %s\n", STR_INFO_C_COMPILER_VERSION);
	printf("INFO_CXX_COMPILER_VERSION: %s\n", STR_INFO_CXX_COMPILER_VERSION);

	printf("INFO_OS_TARGET_NAME: %s\n", STR_INFO_OS_TARGET_NAME);
	printf("INFO_OS_TARGET_ARCH: %s\n", STR_INFO_OS_TARGET_ARCH);

	printf("INFO_OS_HOST_NAME: %s\n", STR_INFO_OS_HOST_NAME);
	printf("INFO_OS_HOST_VERSION: %s\n", STR_INFO_OS_HOST_VERSION);
	printf("INFO_OS_HOST_ARCH: %s\n", STR_INFO_OS_HOST_ARCH);

	printf("CMAKE_SIZEOF_VOID_P = %d\n", CMAKE_SIZEOF_VOID_P);
	printf("REAL_SIZEOF_VOID_P = %d\n", (int)sizeof(void *));

#ifdef C_COMPILER_VC
	printf("C_COMPILER_VC = 1\n");
#else
	printf("C_COMPILER_VC = 0\n");
#endif

#ifdef C_COMPILER_ICC
	printf("C_COMPILER_ICC = 1\n");
#else
	printf("C_COMPILER_ICC = 0\n");
#endif

#ifdef C_COMPILER_LLVM_GCC
	printf("C_COMPILER_LLVM_GCC = 1\n");
#else
	printf("C_COMPILER_LLVM_GCC = 0\n");
#endif

#ifdef C_COMPILER_MINGW
	printf("C_COMPILER_MINGW = 1\n");
#else
	printf("C_COMPILER_MINGW = 0\n");
#endif

#ifdef C_COMPILER_CLANG
	printf("C_COMPILER_CLANG = 1\n");
#else
	printf("C_COMPILER_CLANG = 0\n");
#endif

#ifdef C_COMPILER_BCC
	printf("C_COMPILER_BCC = 1\n");
#else
	printf("C_COMPILER_BCC = 0\n");
#endif

#ifdef C_COMPILER_GCC
	printf("C_COMPILER_GCC = 1\n");
#else
	printf("C_COMPILER_GCC = 0\n");
#endif

#ifdef C_COMPILER_PGI
	printf("C_COMPILER_PGI = 1\n");
#else
	printf("C_COMPILER_PGI = 0\n");
#endif

#ifdef C_COMPILER_EKOPATH
	printf("C_COMPILER_EKOPATH = 1\n");
#else
	printf("C_COMPILER_EKOPATH = 0\n");
#endif

#ifdef C_COMPILER_SUNPRO
	printf("C_COMPILER_SUNPRO = 1\n");
#else
	printf("C_COMPILER_SUNPRO = 0\n");
#endif

#ifdef BIG_ENDIAN
	printf("BIG_ENDIAN = 1\n");
#else
	printf("BIG_ENDIAN = 0\n");
#endif

#ifdef LITTLE_ENDIAN
	printf("LITTLE_ENDIAN = 1\n");
#else
	printf("LITTLE_ENDIAN = 0\n");
#endif
	return 0;
}
