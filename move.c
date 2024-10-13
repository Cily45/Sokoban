//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

bool isMoveAvailable(char userMove, pos player, pos box) {
    int x = player.x;
    int y = player.y;
    if (userMove == 'z') {
        x--;
        if (x == 1 && box.x == 1 && box.y == player.y) {
            return false;
        }
        return x > 0;
    }

    if (userMove == 's') {
        x++;
        if (x == 8 && box.x == 8 && box.y == player.y) {
            return false;
        }
        return x < 9;
    }

    if (userMove == 'q') {
        y--;
        if (y == 1 && box.y == 1 && box.x == player.x) {
            return false;
        }
        return y > 0;
    }

    if (userMove == 'd') {
        y++;
        if (y == 8 && box.y == 8 && box.x == player.x) {
            return false;
        }
        return y < 9;
    }

    return true;
}

pos movePlayer(pos player, char playerMove) {
    if (playerMove == 's') {
        player.x++;
    } else if (playerMove == 'd') {
        player.y++;
    } else if (playerMove == 'q') {
        player.y--;
    } else if (playerMove == 'z') {
        player.x--;
    }

    return player;
}

pos moveBox(pos player, pos box, char playerMove) {
    pos boxCopy = box;
    if (player.x == box.x && player.y == box.y) {
        if (playerMove == 's') {
            boxCopy.x++;
        } else if (playerMove == 'd') {
            boxCopy.y++;
        } else if (playerMove == 'q') {
            boxCopy.y--;
        } else if (playerMove == 'z') {
            boxCopy.x--;
        }
    }
    if (boxCopy.x < 9 && boxCopy.x > 0 && boxCopy.y < 9 && boxCopy.y > 0) {
        return boxCopy;
    }

    return box;
}
