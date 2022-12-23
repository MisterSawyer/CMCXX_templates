cmake_minimum_required (VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
project(Engine LANGUAGES CXX)

#Make Dynamic engine library
add_library(Engine SHARED ${CMAKE_CURRENT_SOURCE_DIR}/engine.cpp ${CMAKE_CURRENT_SOURCE_DIR}/en2.cpp)

#libA
add_subdirectory(libA)

#link libA to Engine
target_link_libraries(Engine PUBLIC libA)