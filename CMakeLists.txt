cmake_minimum_required(VERSION 3.25)
project(tpPOO)

set(CMAKE_CXX_STANDARD 20)

add_executable(tpPOO main.cpp
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
        props.h)

target_link_libraries(${PROJECT_NAME} C:/Users/ajord/OneDrive/Ambiente de Trabalho/ISEC/POO/tpPOOpdcurses.a)