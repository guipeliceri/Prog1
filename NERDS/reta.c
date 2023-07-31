#include <stdio.h>

int main()
{
    int i;
    int vezes;
    int SN;

    printf("Quantos pontos você quer escrever?\n");
    scanf("%d", &vezes);

    if(vezes < 2)
    {
        printf("Número insuficiente para uma reta\n");
        return 0;
    }

    int x[vezes];
    int y[vezes];
    int total[vezes];

    printf("Entre com os pontos como x y:\n");

    for(i=0;i<vezes;i++)
    {
        scanf("%d %d", &x[i], &y[i]);
        total[i] = y[i]-x[i];
    }

    for(i=0;i<vezes-1;i++)
    {
      if(total[i] == total[i+1])
      {
         SN = 1;
      }
      else
      {
         SN = 0;
         break;
      }
    }

    if(SN == 1)
    {
        printf("TRUE\n");
    }
    else
        printf("FALSE\n");
}