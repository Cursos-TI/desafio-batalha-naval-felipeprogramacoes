#include <stdio.h>

int main(){

    int linhas = 10;
    int colunas = 10;
    int tabuleiro[10][10];

    //começar a matriz 
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      tabuleiro[i][j] = 0; 
    }
  }

//posição dos navios
  tabuleiro[3][3] = 3;
  tabuleiro[3][4] = 3;
  tabuleiro[3][5] = 3;

  tabuleiro[0][9] = 3;
  tabuleiro[1][9] = 3;
  tabuleiro[2][9] = 3;

//tabuleiro
  printf("# A B C D E F G H I J \n"); 
  for (int i = 0; i < linhas; i++) {
    printf("%d ", i); 
    for (int j = 0; j < colunas; j++) {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
  }
  return 0;
}
