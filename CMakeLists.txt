cmake_minimum_required(VERSION 3.6)

project(test_cmake)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

file(GLOB
            CPP_SOURCES "Definition/*.cpp" 
            "Definition/TypesOfData/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/Declaration/Sequence" 
"${PROJECT_SOURCE_DIR}/Declaration/Sorter" 
"${PROJECT_SOURCE_DIR}/Declaration/TypesOfData")

add_executable(${PROJECT_NAME} ${CPP_SOURCES})