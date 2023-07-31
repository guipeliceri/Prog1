#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float grau;
  float x;
  int i;
  float* coeficientes;
  float total = 0;

  scanf("%f", &grau);

  coeficientes = (float*)malloc((grau+1) * sizeof(float));

  if(coeficientes == NULL)
  {
   return 1;
  }

  for(i = 0; i <= grau; i++)
  {
    scanf("%f", &coeficientes[i]); 
  }

  scanf("%f", &x);

  for(i = 0; i <= grau; i++)
  {
    coeficientes[i] *= pow(x, i);
    total += coeficientes[i];
  }

  printf("%.2f\n", total);

  free(coeficientes);

  return 0;
}