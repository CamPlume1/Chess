//
// Created by Cam on 8/6/2023.
//

#ifndef CHESS_MOVE_H
#define CHESS_MOVE_H

#include <utility>

struct Move {
    std::pair<int, int> from;
    std::pair<int, int> to;
} Move_;

#endif //CHESS_MOVE_H
