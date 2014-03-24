cmake_minimum_required (VERSION 2.8.4)
project(GetSystemInfo-Test)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/modules" "${CMAKE_MODULE_PATH}")
include(GetSystemInfo)

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin/${INFO_OS_TARGET_NAME}-${INFO_OS_TARGET_ARCH}/${INFO_COMPILER_SUITE_NAME}-${INFO_CXX_COMPILER_VERSION}/${CMAKE_BUILD_TYPE}")

configure_file("${PROJECT_SOURCE_DIR}/config/config.h.in" "${PROJECT_SOURCE_DIR}/src/config.h")

set(PROJECT_SOURCES
  "${PROJECT_SOURCE_DIR}/src/main.c"
)

set(PROJECT_HEADERS  
  "${PROJECT_SOURCE_DIR}/src/config.h"
)

include_directories("${PROJECT_SOURCE_DIR}/include")

if("${INFO_OS_TARGET_NAME}" STREQUAL "Windows")
  add_definitions(-DSTRICT)
  add_definitions(-DUNICODE)  

  if("${INFO_COMPILER_SUITE_NAME}" STREQUAL "vc")
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
  endif()
endif()

add_executable(GetSystemInfo-Test ${PROJECT_SOURCES} ${PROJECT_HEADERS})
