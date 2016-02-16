cmake_minimum_required(VERSION 2.6.4)

project(cassandra_cpp)
set(PROJECT_CASSANDRA cassandra_cpp)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package("Boost")

set(SOURCE_FILES main.cpp NLP.cpp NLP.h Schema.cpp Schema.h)
add_executable(cassandra_cpp ${SOURCE_FILES})

find_package(Cassandra REQUIRED)

include_directories(${CASSANDRA_INCLUDE_DIRS})
target_link_libraries(${PROJECT_CASSANDRA} ${CASSANDRA_LIBRARIES})

find_package(Libuv REQUIRED)
target_link_libraries(${PROJECT_CASSANDRA} ${LIBUV_LIBRARIES})

set_property(
        TARGET ${PROJECT_CASSANDRA}
        APPEND PROPERTY COMPILE_FLAGS ${EXAMPLE_C_FLAGS})

