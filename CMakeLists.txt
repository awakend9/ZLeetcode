cmake_minimum_required(VERSION 3.8)

project(ZLeetcode C)

aux_source_directory(./0012 SRC0012_DIR)
LINK_LIBRARIES(m)
add_executable(Z0012 ${SRC0012_DIR})
target_compile_options(Z0012 PRIVATE -Wall -O3)

aux_source_directory(./0017 SRC0017_DIR)
add_executable(Z0017 ${SRC0017_DIR})

aux_source_directory(./0029 SRC0029_DIR)
add_executable(Z0029 ${SRC0029_DIR})
