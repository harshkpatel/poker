cmake_minimum_required(VERSION 3.27)
project(poker)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(poker
        user.cpp
        user.h
        player.h
        player.cpp
        value.h
        card.h
        suit.h
        card.cpp
        deck.h
        deck.cpp)
