#include <stdio.h>

int main()
{

int N, P, R, i, resp1;
scanf("%d %d", &N, &P);
i = N;
resp1 = 0;

//PARTE 1 DO TRABALHO
while (i > 1)
{
  i--;

  if(N%i==0)
  {
    resp1 += i;
  }
}

if(N==resp1)
  printf("N=%d eh um numero perfeito.\n", N);

else if(N<resp1)
  printf("N=%d eh um numero abundante.\n", N);

else
  printf("N=%d eh um numero deficiente.\n", N);


//PARTE 2 DO TRABALHO
if(N%P==0)
 printf("P=%d eh um divisor de N=%d.\n", P, N);

else
 printf("P=%d nao eh um divisor de N=%d.\n", P, N);


//PARTE 3 DO TRABALHO
R = N-P;
i = R;
resp1 = 0;

while (i > 1)
{
  i--;

  if(R%i==0)
  {
    resp1 += i;
  }
}

if(R==resp1)
  printf("R=%d eh um numero perfeito.\n", R);

else if(R<resp1)
  printf("R=%d eh um numero abundante.\n", R);

else
  printf("R=%d eh um numero deficiente.\n", R);

}