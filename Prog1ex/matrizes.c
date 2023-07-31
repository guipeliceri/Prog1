#include <stdio.h>

int main()
{
    int matriz[20][20];
    int nlinha, ncoluna, l, c;
    

  scanf("%d %d", &nlinha, &ncoluna);

//pegando a matriz

  for(l=0; l<nlinha; l++)  //corre linhas
  {
    for(c=0; c<ncoluna; c++)  //corre colunas
    {
      scanf("%d", &matriz[l][c]);
    }
  }

//fazendo os paranaue matematico
  int transposta[20][20];

  for(l=0; l<ncoluna; l++)  //corre linhas
  {
    for(c=0; c<nlinha; c++)  //corre colunas
    {
     transposta[l][c] = matriz[c][l];
    }
  }


//printf na transpostaaaa

 for (l=0; l<ncoluna; l++) 
     {
      for (c=0; c<nlinha; c++) 
      {
        printf("%d ", transposta[l][c]);
      }
      printf("\n");
    }
  }

 