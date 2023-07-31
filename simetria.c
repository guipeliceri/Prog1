#include <stdio.h>
#include <stdlib.h>

int** funcao(int l, int c, int** matriz);

int main() 
{
    int linhas, colunas, simetriaa=1;
    int **matriz, **transposta;
    int m, t;
    
    scanf("%d %d", &linhas, &colunas); //pegar matriz

    //alocação
    matriz = (int**)malloc(linhas*sizeof(int*)); 
    if(matriz == NULL) 
        return 1;

    
    for(t=0; t<linhas; t++)
    {
        matriz[t] = (int*)malloc(colunas*sizeof(int)); 
            return 1;

    }
                         
    for(m=0; m<linhas; m++) //valor
    {
         for(t=0; t<colunas; t++)
             scanf("%d", &matriz[m][t]);
    }

    //alocação
    transposta = (int**)malloc(colunas*sizeof(int*));
    if(transposta == NULL)
        return 1;

    for(m=0; m<colunas; m++)
    {
        transposta[m] = (int*)malloc(linhas*sizeof(int)); 
        if(transposta[m] == NULL) 
            return 1;
    }

    transposta = funcao(colunas, linhas, matriz); 
 
  
    for(m=0; m<linhas; m++)
    {
      for(t=0; t<colunas; t++)
      if(matriz[m][t] != transposta[m][t]) //analise da matriz
      simetriaa = 0;   
    }

   
    for(m=0; m<linhas; m++) //função free
    free(matriz[m]);

    for(t=0; t<colunas; t++)
    free(transposta[t]);

    free(matriz);
    free(transposta);
    
    
    if (simetriaa)
        printf("Eh simetrica\n");
    else                                //respostas
        printf("Nao eh simetrica\n");
    return 0;
}

int** funcao(int m, int t, int** matriz)
{
    int **resposta = (int**)malloc(m*sizeof(int*));
    int lin, col;
    
    for(lin=0; lin<m; lin++)                     //função!
        trp[col] = (int*)malloc(t*sizeof(int));
    for(lin=0; lin<m; lin++)
       for(col=0; col<t; col++)
        trp[lin][col] = matriz[col][lin];

    return resposta;
}