cmake_minimum_required(VERSION 3.26)
project(Chess)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Chess
        BoardAPI/Pieces/Piece.cpp
        BoardAPI/Pieces/Piece.h
        BoardAPI/Move.h
        BoardAPI/Pieces/Pawn.h
        BoardAPI/Pieces/Pawn.cpp
        BoardAPI/BoardFunc.h
        BoardAPI/Board.h
        BoardAPI/Board.cpp)
