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

pos initpos(int type, char **board);

//playerControle.c
char askMove();

void printBoard(char **board);

//move
bool isMoveAvailable(char playerMove, pos player);
#endif //SOKOBAN_H
