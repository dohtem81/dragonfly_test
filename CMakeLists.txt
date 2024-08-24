cmake_minimum_required(VERSION 3.1)
project( drangonFly )
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package( hiredis REQUIRED )
include_directories( ${hiredis_INCLUDE_DIRS} )
add_executable( clientDrangonFly 
    client.cpp )
target_link_libraries( clientDrangonFly ${hiredis_LIBS} ) 