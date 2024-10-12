//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

// type:  1  = player | 2 = box | 3 = goal
int main() {
    srand(time(NULL));
    char **board = initBoard();
    pos player = initpos(1, board);
    pos goal = initpos(3, board);
    pos box = initpos(2, board);

    printBoard(board);

    char playerMove = askMove(player);

    while (true) {
        board = initBoard();

        player =  movePlayer(player, playerMove);
        box = moveBox(player, box, playerMove);
        board = updateBoard(board, player, box, goal);
        //verifier si loose/win
        printBoard(board);

        playerMove = askMove(player);
        // system("clear");
    }

    // free
    for (int i = 0; i < 10; i++) {
        free(board[i]);
    }
    free(board);
    return 0;
}
