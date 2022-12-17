#Configure library
add_subdirectory(lib)

#Set project variables
cmake_minimum_required (VERSION 3.5)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#Set executable name
set( EXE_NAME a)

#Find executable sources
file(GLOB EXE_SRC ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)

#Create executable project
project(${EXE_NAME} LANGUAGES CXX)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -v -g --debug -D_DEBUG=1")


#Create executable target
add_executable( ${EXE_NAME} ${EXE_SRC})

#Link library `lib` to executable
target_link_libraries(${EXE_NAME}
 PUBLIC
 lib
 )

#Add library incldues to executable target
target_include_directories(${EXE_NAME}
PUBLIC
${CMAKE_CURRENT_SOURCE_DIR}/lib/include
)
