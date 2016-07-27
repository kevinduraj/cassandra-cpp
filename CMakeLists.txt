cmake_minimum_required(VERSION 2.6.4)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")

set(PROJECT_NOOTRINO nootrino)
set(EXAMPLE_C_FLAGS "-g")

add_executable(${PROJECT_NOOTRINO} main.cpp  QueryCQL.cpp  Schema.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(Cassandra REQUIRED)

include_directories(${CASSANDRA_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NOOTRINO} ${CASSANDRA_LIBRARIES})

find_package(Libuv REQUIRED)
target_link_libraries(${PROJECT_NOOTRINO} ${LIBUV_LIBRARIES})

set_property(
  TARGET ${PROJECT_NOOTRINO}
  APPEND PROPERTY COMPILE_FLAGS ${EXAMPLE_C_FLAGS})
