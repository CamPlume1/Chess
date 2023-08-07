//
// Created by Cam on 8/6/2023.
//

#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include "BoardAPI/Move.h"



class Piece {
protected:
    std::pair<int, int> location;


public:
    virtual MoveState makeMove(const Move& move);

};



#endif //CHESS_PIECE_H
