//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

char **initBoard() {
    char **board;
    board = malloc(sizeof(char *) * 10 + 1);
    for (int i = 0; i < 10; i++) {
        board[i] = malloc(sizeof(char) * 10 + 1);
    }

    for (int i = 0; i < 10; i++) {
        if (i == 0 || i == 9) {
            for (int j = 0; j < 10; j++) {
                board[i][j] = '#';
            }
        } else {
            for (int j = 0; j < 10; j++) {
                if (j == 0 || j == 9) {
                    board[i][j] = '#';
                } else {
                    board[i][j] = ' ';
                }
            }
        }
    }
    return board;
}

// type:  1  = player | 2 = box | 3 = goal
pos initpos(int type, char **board) {
    int x = 0;
    int y = 0;

    if (type == 2) {
        x = rand() % 7 + 1;
        y = rand() % 7 + 1;
    } else {
        x = rand() % 8 + 1;
        y = rand() % 8 + 1;
    }

    pos p = {x, y};

    if (type == 1) {
        board[x][y] = 'o';
    } else if (type == 2) {
        board[x][y] = 'X';
    } else if (type == 3) {
        board[x][y] = '.';
    }

    return p;
}

char addMove(pos player, pos box, char **board) {



}