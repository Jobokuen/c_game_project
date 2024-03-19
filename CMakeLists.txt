cmake_minimum_required(VERSION 3.0)
project(tetris_jbk)

file(GLOB SRC_FILES "src/*.c")

add_executable(tetris_jbk ${SRC_FILES})
target_include_directories(tetris_jbk PUBLIC include)

install(TARGETS tetris_jbk DESTINATION /usr/local/bin)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION /usr/local/include)
install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/ DESTINATION /usr/local/src)

set(CPACK_GENERATOR "DEB")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "jbk")
set(CPACK_DEBIAN_PACKAGE_DESCRIPITON "tetris game")
include(CPack)