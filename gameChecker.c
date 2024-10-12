//
// Created by cily on 12/10/2024.
//
#include "sokoban.h"

bool isWin(pos goal, pos box){
  if(box.x == goal.x && box.y == goal.y){
    return true;
    }
      return false;
  }

bool isLose( pos goal, pos box){
  if(box.x == 1 && box.y == 1){
    return true;
  }
  if(box.x == 8 && box.y == 8){
    return true;
  }
  if(box.x == 8 && box.y == 1){
    return true;
  }
  if(box.x == 1 && box.y == 8){
    return true;
  }

  if(box.x == 1 && goal.x != 1){
    return true;
  }
  if(box.x == 8 && goal.x != 8){
    return true;
  }
  if(box.y == 1 && goal.y != 1){
    return true;
  }
  if(box.y == 8 && goal.y != 8){
    return true;
  }

  return false;
}