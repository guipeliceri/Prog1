#include <stdio.h>

int main()
{
    float P1, P2, T, Médiafinal;

    printf("Nota P1: ");
    scanf("%f", &P1);

    printf("Nota P2: ");
    scanf("%f", &P2);

    printf("Nota T: ");
    scanf("%f", &T);

    Médiafinal = (P1 + P2 + T)/3;
    
    printf("A média do aluno é: %.2f\n", Médiafinal);
}