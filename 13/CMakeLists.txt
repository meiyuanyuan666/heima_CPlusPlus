cmake_minimum_required(VERSION 3.8)

project(main13_test_demo)

# 使用 GNUInstallDirs.cmake模块,定义了一组标准的变量，用于安装不同类型文件到规范指定的目录中。
include(GNUInstallDirs)
# 可执行文件目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
# 动态库文件目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
# 设置静态库文件目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})


set(CMAKE_CXX_COMPILER "g++") # 设定编译器

set(CMAKE_BUILD_TYPE "Debug")

set(LIBRARY_TARGET_NAME main13_test)

# List of CPP (source) library files.
set(${LIBRARY_TARGET_NAME}_SRC
  main13.cpp
)

add_library(${${LIBRARY_TARGET_NAME}_shared} SHARED ${${LIBRARY_TARGET_NAME}_SRC})
add_library(${${LIBRARY_TARGET_NAME}_static} STATIC ${${LIBRARY_TARGET_NAME}_SRC})

add_executable(${PROJECT_NAME} ${${LIBRARY_TARGET_NAME}_SRC})

# target_link_libraries(demo math)