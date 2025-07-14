cmake_minimum_required(VERSION 3.10)
project(sysapi)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

include_directories(includes/)

set(LIB_NAME ${PROJECT_NAME})
add_library(${LIB_NAME} STATIC
    src/sysapi.cpp
)

set(EXE_NAME ${PROJECT_NAME}-tester)
add_executable(${EXE_NAME}
    tests.cpp
)
add_dependencies(${EXE_NAME} ${LIB_NAME})
target_link_libraries(${EXE_NAME}
    ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY}/lib${LIB_NAME}.a
)