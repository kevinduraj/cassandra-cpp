cmake_minimum_required(VERSION 3.3)
project(cassandra_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp NLP.cpp NLP.h)
add_executable(cassandra_cpp ${SOURCE_FILES})