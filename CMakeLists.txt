cmake_minimum_required(VERSION 3.10)
project(log4cxx)

include_directories(./log4cxx-demo/include)
link_directories(./log4cxx-demo/lib)

add_executable(TestLog4cxx main.cpp)
target_link_libraries(TestLog4cxx  log4cxx)
