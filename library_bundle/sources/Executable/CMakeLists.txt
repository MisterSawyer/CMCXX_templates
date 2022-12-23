cmake_minimum_required (VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
project(Executable LANGUAGES CXX)

add_executable(executable executable.cpp)

target_include_directories(executable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Engine)
target_link_directories(executable PUBLIC ${CMAKE_BINARY_DIR}/../Engine/bin)

target_link_libraries(executable PUBLIC Engine)