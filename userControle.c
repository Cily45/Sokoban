//
// Created by cily on 11/10/24.
//
#include "sokoban.h"

char askMove(){
  char move;
  while(move != 'z' || move != 's' || move != 'd' || move != 'q'){
    printf("Choisisez un mouvement haut(z) bas(s) droite(d) gauche(q): ");
    scanf("%c",&move);
    }
  return move;
  }

  void printBoard(char ** board){
    for(int i = 0;i < 10; i++){
      for(int j = 0;j < 10;j++){
        printf("%c",board[i][j]);
        if(j == 9){
          printf("\n");
          }
        }
     }
  }