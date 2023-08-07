cmake_minimum_required(VERSION 3.26)
project(Chess)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Chess
        BoardAPI/Piece.cpp
        BoardAPI/Piece.h
        BoardAPI/Move.h
        BoardAPI/Pawn.h
        BoardAPI/Pawn.cpp
        BoardAPI/BoardFunc.h)
