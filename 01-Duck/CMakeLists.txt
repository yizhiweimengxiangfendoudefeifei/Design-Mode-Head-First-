add_compile_options(-std=c++11)
cmake_minimum_required(VERSION 3.14)

project(duck_design_pattern)

include_directories (${CMAKE_CURRENT_SOURCE_DIR}/)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/ DIR_SRCS)

add_executable(duck_design_pattern ${DIR_SRCS})


target_compile_options(duck_design_pattern PRIVATE -Wall -Wextra)