cmake_minimum_required(VERSION 3.10)
project(sysapi)

# setting up some basic props
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# finding da packs (to do: make cross compatible)
# find_package(X11 REQUIRED)

# includes for all!
include_directories(include/)

# libsysapi binaries
set(LIB_NAME ${PROJECT_NAME})
add_library(${LIB_NAME} STATIC
src/sysapi.cpp
)
# linking libbies specifically to only libsysapi to avoid confusion later
# to do: make cross compatible
# target_link_libraries(${LIB_NAME} ${X11_LIBRARIES})

# tester program executable
set(EXE_NAME ${PROJECT_NAME}-tester)
add_executable(${EXE_NAME}
    tests.cpp
)
add_dependencies(${EXE_NAME} ${LIB_NAME})
target_link_libraries(${EXE_NAME} ${LIB_NAME})