//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

char askMove(pos player, char ** board, pos box, pos goal) {
    char move;

    while (true) {
        printGame(player, box, goal, board);
        printf("Choisissez un mouvement haut(z) bas(s) droite(d) gauche(q): ");
        scanf(" %c", &move);
        if (move == 'z' || move == 's' || move == 'd' || move == 'q') {
           if(isMoveAvailable(move, player, box)) {
             return move;
           }
        }
    }
}

void printBoard(char **board) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", board[i][j]);
            if (j == 9) {
                printf("\n");
            }
        }
    }
}

void printPos(pos player, pos box, pos goal) {
  printf("Joueur: %d %d\n", player.x, player.y);
  printf("Boite: %d %d\n", box.x, box.y);
  printf("Emplacement: %d %d\n", goal.x, goal.y);
}

void printGame(pos player, pos box, pos goal,char ** board) {
  system("clear");
  printPos(player, box, goal);
  printBoard(board);
}