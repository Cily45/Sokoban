//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

// type:  1  = player | 2 = box | 3 = goal
int main() {
    srand(time(NULL));
    char **board = initBoard();
    pos player = initpos(1);
    pos goal = initpos(3);
    while (player.x == goal.x && player.y == goal.y) {
        goal = initpos(3);
    }
    pos box = initpos(2);
    while ((player.x == goal.x && player.y == goal.y) || (box.x == goal.x && box.y == goal.y)) {
        box = initpos(2);
    }

    board = updateBoard(board, player, box, goal);
    while (true) {
        char playerMove = askMove(player, board, box, goal);
        player = movePlayer(player, playerMove);
        box = moveBox(player, box, playerMove);
        board = updateBoard(board, player, box, goal);

        if (isWin(goal, box)) {
            printGame(player, box, goal, board);
            printf("\nGagné\n");
            break;
        }
        if (isLose(goal, box)) {
            printGame(player, box, goal, board);
            printf("\nPerdu\n");
            break;
        }
    }

    // free
    for (int i = 0; i < 10; i++) {
        free(board[i]);
    }
    free(board);
    return 0;
}
