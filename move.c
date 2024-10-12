//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

bool isMoveAvailable(char userMove, pos player) {
    int x = player.x;
    int y = player.y;
    if (userMove == 'z') {
        y--;
        return y > 0;
    }
    if (userMove == 's') {
        y++;
        return y < 9;
    }
    if (userMove == 'q') {
        x--;
        return x > 0;
    }
    if (userMove == 'd') {
        x++;
        return x < 9;
    }
    return true;
}
