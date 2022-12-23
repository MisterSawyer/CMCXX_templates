#libB
add_subdirectory(libB)

#Create libA
add_library(libA OBJECT ${CMAKE_CURRENT_SOURCE_DIR}/libA.cpp)

#add B to A
target_include_directories(libA PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/libB)
target_link_libraries(libA PUBLIC libB)
