//
// Created by Cam on 8/6/2023.
//

#ifndef CHESS_MOVE_H
#define CHESS_MOVE_H

#include <utility>

//A Move Structure, and some relevant helper functions and types


struct Move {
    std::pair<int, int> from;
    std::pair<int, int> to;
} Move_;

//An enumeration determining if a move has been successful or if it has failed
enum MoveState {SUCCESS, FAILURE};

//Returns true if a coordinate is on the board, false if not
bool validCoord(std::pair<int, int> &loc){
    if (loc.first < 0 || loc.first > 7 || loc.second < 0 || loc.second > 7){
        return false;
    }
    else {return true;}
}
#endif //CHESS_MOVE_H
