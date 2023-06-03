cmake_minimum_required(VERSION 3.5)

project(main12_test)

set(CMAKE_CXX_COMPILER "g++") # 设定编译器

set(CMAKE_BUILD_TYPE "Debug")

add_executable(${PROJECT_NAME} main12.cpp)

# target_link_libraries(demo math)