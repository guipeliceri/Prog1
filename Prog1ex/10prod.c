#include <stdio.h>

int main ()
{
  float qntd[10];
  float custo[10];
  int i;
  float prodqnt = 0;
  float faturamento = 0;

  for(i=0; i<10; i++)
  {
     scanf("%f", &qntd[i]);
     prodqnt += qntd[i]; 
  }

  for (i=0; i<10; i++)
     scanf("%f", &custo[i]);
     
  
  for(i=0; i<10; i++)
  {
    faturamento += qntd[i]*custo[i];
  }
  
 printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %.0f\n", faturamento, prodqnt);

}