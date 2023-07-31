#include <stdio.h>
#include <math.h>

#define N 15

float main()
{
    //Variáveis
 int linhas, colunas, i, k;
 float matriz [N][N];

//PEGAR LIN E COL
scanf("%d", &colunas);
  linhas = colunas;

  int maior[colunas*colunas];
  int menor[colunas*colunas];

  int one[linhas]; //VARIÁVEL 1 E -1...

  float pesos[linhas]; //PESOOOOOOOOOOOO

//COLOCANDO VALOR NA MATRIZ
for(i=0; i < colunas; i++)
{
 for(k=0; k < linhas; k++)
 {
    scanf("%f", &matriz [k][i]);
 }

printf("\n");
}

//SÓ PRA VER COMO FICOU ESSA BAGAÇA
printf("Matriz original\n");
for (i=0; i < colunas; i++)
{
 for(k=0; k < linhas; k++)
 {
    printf("%2.f ", matriz [k][i]);

 }
  printf("\n");
}

//ACHAR O MAIOR VALOR DA MATRIZ

 float max[colunas];

for (k=0; k < linhas; k++)
{
  float maior = matriz[0][k];

 for(i=0; i < colunas; i++)
 {
    if (matriz[k][i] > maior) 
  {
   maior = matriz[k][i];
  }
 }
  max[k] = maior;
}

//ACHAR O MENOR VALOR DA MATRIZ
 float min[colunas];

for (k=0; k < linhas; k++)
{
  float menor = matriz[0][k];

 for(i=0; i < colunas; i++)
 {
    if (matriz[k][i] < menor) 
  {
   menor = matriz[k][i];
  }
 }
  min[k] = menor;
}


//PEGANDO OS 1 E -1
for (i=0; i < colunas; i++)
{
  scanf("%2d", &one[i]);
}

/*MULTIPLICANDO AS COLUNAS QUE SERÃO DIVIDIDAS EM MAXIMIZADAS E MINIMIZADAS*/
for (i=0; i < colunas; i++)
{
 for(k=0; k < linhas; k++)
 {
    matriz [k][i] *= one[k];
 }
}


for (i=0; i < colunas; i++)
{
 for(k=0; k < linhas; k++)
 {
    if(matriz[k][i] < 0)
    {
       matriz[k][i] = (min[k]/matriz[k][i])*-1;
    }
    else
    {
       matriz[k][i] = matriz[k][i]/max[k];
    } 
 }
}

//OLHA COMO TA VERSAO 2
printf("Matriz normalizada\n");
for (i=0; i < colunas; i++)
{
 for(k=0; k < linhas; k++)
 {
    printf("%2.2f ", matriz [k][i]);

 }
  printf("\n");
}

//PEGANDO OS PESO CARALHO 
for (i=0; i < colunas; i++)
{
  scanf("%f", &pesos[i]);
}

//COLOCANDO OS PESO MANO

 for (i = 0; i < colunas; i++)
    {
        for (k = 0; k < linhas; k++) 
        {
             matriz[k][i] *= pesos[i]; 
        }
    }

    //OLHA COMO TA VERSAO 3TAPOHAA
printf("Matriz multiplicada pelos pesos\n");
for (i=0; i < colunas; i++)
{
 for(k=0; k < linhas; k++)
 {
    printf("%2.2f ", matriz [k][i]);

 }
  printf("\n");
}

}





