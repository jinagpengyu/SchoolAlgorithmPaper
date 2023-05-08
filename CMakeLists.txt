cmake_minimum_required(VERSION 3.10) 

# use clang 
# set(CMAKE_EXPORT_COMPILECOMMANDS ON) 
# set the project name 
project(deque_project) 
# project(get_number)
# add the executable 
add_executable(main1 deque.cpp deque.h ) 
add_executable(main2 get_many_number.cpp)
add_executable(main3 exh_sort.cpp)