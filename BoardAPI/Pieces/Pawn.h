//
// Created by Cam on 8/6/2023.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H


#include "Piece.h"

class Pawn : Piece {


public:
    MoveState makeMove(const Move& move) override;
};


#endif //CHESS_PAWN_H
