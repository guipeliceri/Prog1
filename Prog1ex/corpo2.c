#include <stdio.h>
#include <string.h>

int main()
{
   typedef struct corpo
{
    float altura;
    float peso;
    char nome[20];
} corpo;

corpo c1;

scanf("%f %f %s", &c1.altura, &c1.peso, c1.nome);

printf("%.3f\n", c1.peso/(c1.altura*c1.altura));


}