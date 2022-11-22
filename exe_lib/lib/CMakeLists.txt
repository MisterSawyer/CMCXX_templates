#Set project variables
cmake_minimum_required (VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

#Set library name
set( LIB_NAME lib)

#Find library sources
file(GLOB LIB_SRC ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)

#Create library project
project(${LIB_NAME} LANGUAGES CXX)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -v")

#Create static library target
add_library( ${LIB_NAME} STATIC ${LIB_SRC})

#Add library incldues to library target
target_include_directories(${LIB_NAME} 
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/include
)


