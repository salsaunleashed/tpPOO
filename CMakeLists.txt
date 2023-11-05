cmake_minimum_required(VERSION 3.25)
project(tpPOO)

set(CMAKE_CXX_STANDARD 23)

add_executable(tpPOO main.cpp
        curses.h
        Terminal.cpp
        Terminal.h)

target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/pdcurses.a)