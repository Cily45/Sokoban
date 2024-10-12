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
//gameChecker.c
bool isWin(pos goal, pos box);

bool isLose(pos goal, pos box);

//board.c
char **initBoard();

char **updateBoard(char **board, pos player, pos box, pos goal);

pos initpos(int type);

//playerControle.c
char askMove(pos player, char **board, pos box, pos goal);

void printBoard(char **board);

void printPos(pos player, pos box, pos goal);

void printGame(pos player, pos box, pos goal, char ** board);

//move
bool isMoveAvailable(char playerMove, pos player, pos box);

pos movePlayer(pos player, char playerMove);

pos moveBox(pos player, pos box, char playerMove);

#endif //SOKOBAN_H
