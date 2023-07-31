#include <stdio.h>

int main()
{
    char letra;
   printf("Insira uma letra: ");
   scanf("%c", &letra);

   char letra2 = letra + 1;

   printf("A letra seguinte é %c\n", letra2);
}