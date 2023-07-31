#include <stdio.h>

int main()
{
    
int num, i, impar, par;
par = 0;
impar = 0;

  for(i=0; i<10; i++)
  {
  scanf("%d", &num);
  num %= 2;

  if(num == 0)
  {
    par++;
  }
  else
  {
    impar++;
  }
  }

  printf("%d pares, %d impares\n", par, impar);
  }

