cmake_minimum_required(VERSION 3.26)
project(TP_POO)

set(CMAKE_CXX_STANDARD 23)

add_executable(TP_POO main.cpp
        curses.h
        Terminal.cpp
        Terminal.h
        sensor.cpp
        sensor.h
        sensor.h
        processor.cpp
        processor.h
        stuff.cpp
        stuff.h
        home.cpp
        home.h
        zone.cpp
        zone.h
        props.cpp
        props.h
        aparelho.cpp
        aparelho.h)

target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/pdcurses.a)
