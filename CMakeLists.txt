cmake_minimum_required(VERSION 3.4.1)

project(sort)

include_directories("./inc")

add_library(src ./src/rakis_sort.c ./inc/rakis_sort.h ./main.c)

add_executable(sort main.c)

target_link_libraries(sort PRIVATE src)