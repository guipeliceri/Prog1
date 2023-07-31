#include <stdio.h>

int main()
{
    int n, i, k, num;
    scanf("%d", &n);

    int vet[n]; 

    for (i = 0; i < n; i++)
    {
     scanf("%d", &vet[i]);
    }

for(k = 0; k < n-1; k++)
{
  for(i = 0; i < n-k-1; i++)
  {
    if(vet[i] > vet[i+1])
    {
      num = vet[i];
      vet[i] = vet[i+1];
      vet[i+1] = num;
    }
  }
}

printf("maior valor: %d\n", vet[n-1]);
printf("menor valor: %d\n", vet[0]);
}