//
// Created by Cam on 8/6/2023.
//

#include "Pawn.h"

MoveState Pawn::makeMove(const Move &move) {
   if (this->location != move.from){
       return MoveState::FAILURE;
   }
   if (move.to.first < 0 || mpv> 7)
}
