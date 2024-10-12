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
pos initpos(int type) {
    int x = 0;
    int y = 0;

    if (type == 2) {
        x = rand() % 6 + 2;
        y = rand() % 6 + 2;
    } else {
        x = rand() % 8 + 1;
        y = rand() % 8 + 1;
    }
    pos p = {x, y};
    return p;
}

char **updateBoard(char **board, pos player, pos box, pos goal) {
    board = initBoard();
    board[goal.x][goal.y] = '.';
    board[player.x][player.y] = 'o';
    board[box.x][box.y] = 'X';
    return board;
}
