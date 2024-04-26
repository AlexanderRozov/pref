cmake_minimum_required(VERSION 3.25)
project(pref)

set(CMAKE_CXX_STANDARD 17)
add_executable(pref main.cpp src/card_game.cpp src/card_game.h src/decl.cpp src/decl.h src/Player.cpp src/Player.h src/StandartFunctionsAndHeaders.h
        src/Game.cpp
        src/Game.h)
