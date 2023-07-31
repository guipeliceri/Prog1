#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* Vaiprolado(char* texto)
{
    int i;
    int tamanho = strlen(texto);
    char* texto2 = (char*)malloc(sizeof(char)*tamanho);

    texto2[0] = texto[tamanho-1];


    for(i = 0; i < tamanho; i++)
    {
        texto2[i+1] = texto[i];
    }

    texto2[tamanho] = '\0';

    return texto2;
}

int main()
{
   char *texto;
   char *texto2;
   texto = (char*)malloc(sizeof(char)*100);
   texto2 = (char*)malloc(sizeof(char)*100);

   fgets(texto, 100, stdin);
    texto[strcspn(texto, "\n")] = 0;

   printf("%s\n", texto);

  texto2 = Vaiprolado(texto);

   printf("%s\n", texto2);

   free(texto);
   free(texto2);

}