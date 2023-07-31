#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texto[81];
    char espelho[81];
    char artel[81];
    char letra[81];
    int resultado;
    int i = 0;
    int j = 0;
    int k = 0;

   fgets(texto, 81, stdin);
    texto[strcspn(texto, "\n")] = 0;

    int comprimento = strlen(texto);

   for(i = (comprimento-1); i>=0; i--)
    {    
        espelho[j] = texto[i];    
        j++;
    }
  printf("%s\n", espelho);


  for(i=0; i<strlen(espelho); i++)
  {
   if(espelho[i] >= 65 && espelho[i] <= 90)
   {
     artel[i] = tolower(espelho[i]);
   }
  }

    for(i=0; i<strlen(texto); i++)
  {
   if(texto[i] >= 65 && texto[i] <= 90)
   {
     letra[i] = tolower(texto[i]);
   }
  }

resultado = strcmp(letra, artel);

if(resultado == 0)
 printf("Esta palavra e um palindromo\n");

else
printf("Esta palavra nao e um palindromo\n");

}