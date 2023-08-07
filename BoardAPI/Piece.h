//
// Created by Cam on 8/6/2023.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include "Move.h"

enum MoveState {SUCCESS, FAILURE};



class Piece {
protected:
    std::pair<int, int> location;


public:
    virtual MoveState makeMove(const Move& move);

};



#endif //CHESS_PIECE_H
