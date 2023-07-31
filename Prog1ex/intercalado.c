#include <stdio.h>

int main()
{
   float vetor1[10];
   float vetor2[10];
   int i, j;

for(i=0; i<10; i++)
 scanf("%f", &vetor1[i]);

for(i=0; i<10; i++)
 scanf("%f", &vetor2[i]);

 for(i=0; i<10; i++)
 {
    printf("%.0f|", vetor1[i]);
    
        printf("%.0f|", vetor2[i]);
 }
 printf("\n");
}