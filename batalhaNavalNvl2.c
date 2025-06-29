int main() {
  int linhas = 10;
  int colunas = 10;
  int tabuleiro[linhas][colunas];
  int numDiagonal = 3;
  int tamanho = 5;

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


//navio na diagonal
{
  for (int i = 7; i < 10; i++)
  {
   tabuleiro[i][i] = numDiagonal;
}
}
for (int i = 1; i < tamanho; i++)
{
  for (int j = 1; j < tamanho; j++)
  {
    if (i + j == tamanho - 1)
    {
      tabuleiro[i][j] = numDiagonal;
    } 
  }
}


  
  

  //exibir o tabuleiro
  printf("# A B C D E F G H I J \n"); 
  for (int i = 0; i < linhas; i++) {
    printf("%d ", i); 
    for (int j = 0; j < colunas; j++) {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
  }

  printf("a posição do navio 1: J,0; J,1; J,2\n");
  printf("a posição do navio 2: D,3; E,3; F,3\n");
  printf("a posição do navio 3: B,3; C,2; D,1\n");
  printf("a posição do navio 4: H,7; I,8; J,9\n"); 


  return 0;
}
