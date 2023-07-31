#include <stdio.h>
#include <string.h>

int main()
{
    char texto[81];
    char espelho[81];
    int i = 0;
    int j = 0;

   fgets(texto, 81, stdin);
    texto[strcspn(texto, "\n")] = 0;

    int comprimento = strlen(texto);

   for(i = (comprimento-1); i>=0; i--)
    {    
        espelho[j] = texto[i];    
        j++;
    }
  printf("%s\n", espelho);
}