#include <stdio.h>

int main()
{
    double idade;

    printf("Insira sua idade: ");
    scanf("%lf", &idade);

    double idade_min = idade*525600; 
    printf("Seu tempo de vida é de %0.2lf minutos\n", idade_min);
}