#include <stdio.h>

int main()
{
   int idade;
   float altura;
   char sexo;

   printf("Insira seu gênero: ");
   scanf("%c", &sexo);

   printf("Insira sua idade: ");
   scanf("%d", &idade);

   printf("Insira sua altura: ");
   scanf("%f", &altura);


   printf("A pessoa tem %d anos, %0.2f de altura, e é do sexo %c\n", idade, altura, sexo);
}