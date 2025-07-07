cmake_minimum_required(VERSION 3.10)
project(sysapi)

set(LIB_NAME lib${PROJECT_NAME})
add_library(${LIB_NAME} STATIC
    src/sysapi.cpp
)
target_include_directories(${LIB_NAME} PRIVATE includes/)

set(EXE_NAME ${PROJECT_NAME}-tester)
add_executable(${EXE_NAME}
    tests.cpp
)
add_dependencies(${EXE_NAME} ${LIB_NAME})
target_include_directories(${EXE_NAME} PUBLIC includes/)