//
// Created by cily on 11/10/24.
//
#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"
#include "time.h"

#ifndef SOKOBAN_H
#define SOKOBAN_H

struct position {
    int x;
    int y;
};

typedef struct position pos;

//board.c
char **initBoard();
char ** updateBoard(char **board, pos player, pos box, pos goal);
pos initpos(int type, char **board);

//playerControle.c
char askMove();

void printBoard(char **board);

//move
bool isMoveAvailable(char playerMove, pos player);
pos movePlayer(pos player, char playerMove);
pos moveBox(pos player, pos box, char playerMove);
#endif //SOKOBAN_H
