//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

bool isMoveAvailable(char userMove, pos player, pos box){
  switch(userMove){
    case 'z':
      return player.y > 1 && player.y - 1 != box.y;
    case 's':
      return player.y < 8 && player.y + 1 != box.y;
    case 'x':
      return player.x > 1 && player.x - 1 != box.x;
    case 'd':
      return player.x < 8 && player.x + 1 != box.x;
  }
    return true;
  }