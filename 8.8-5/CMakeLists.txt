cmake_minimum_required(VERSION 3.10)
project(the_fifth)

include_directories(
    include
)

add_executable(the_fifth src/main.c src/vector_cal.c)