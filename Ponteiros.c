#include <stdio.h>
#include <stdlib.h>


void VerValores(int *v, int *me, int *ma, int tam)
{
    int i;
    *ma = v[0];
    *me = v[0];

    for(i = 1; i < tam; i++)
    {
        if(v[i] < *me)
         *me = v[i];

        if(v[i] > *ma)
        *ma = v[i];
    }

    printf("Na função: Menor: %d\tMaior: %d\n", *me, *ma);
    printf("Na função: Endereço de Me: %p\t Endereço de Ma: %p\n", &me, &ma);
    printf("Na função: Conteúdo de Me: %p\t Conteúdo de Ma: %p\n", me, ma);
}


int main()
{
    int valor = 10, menor, maior, vet[] = {50, 10, 400, 300, 25};
    int* p;
    p = &valor;

    printf("Valor: %d\tEndereço de Valor: %p\n", valor, &valor);
    printf("Endereço de p: %p\n", &p);
    printf("Endereço apontado por p: %p\n", p);
    printf("Conteúdo apontado por p: %d\n", *p);

    VerValores(vet, &menor, &maior, 5);
    printf("Na Main: Menor: %d\tMaior: %d\n", menor, maior);
    printf("Endereço de Menor: %p\t Endereço de Maior: %p\n", &menor, &maior);
}