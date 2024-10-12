//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

bool isMoveAvailable(char userMove, pos player) {
    int x = player.x;
    int y = player.y;
    if (userMove == 'z') {
        x--;
        return y > 0;
    }
    if (userMove == 's') {
        x++;
        return y < 9;
    }
    if (userMove == 'q') {
        y--;
        return x > 0;
    }
    if (userMove == 'd') {
        y++;
        return x < 9;
    }
    return true;
}

pos movePlayer(pos player, char playerMove) {
  if(playerMove == 's') {
    player.x++;
  }else if(playerMove == 'd') {
    player.y++;
  }else if(playerMove == 'q') {
    player.y--;
  }else if(playerMove == 'z') {
    player.x--;
  }

  return player;
}
pos moveBox(pos player, pos box, char playerMove) {
  if(player.x == box.x && player.y == box.y) {
    if(playerMove == 's') {
    box.x++;
  }else if(playerMove == 'd') {
    box.y++;
  }else if(playerMove == 'q') {
    box.y--;
  }else if(playerMove == 'z') {
    box.x--;
  }
  }

  return box;
}
