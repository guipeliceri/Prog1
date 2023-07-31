#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    char nome[100];
    float RA;
    float P1;
    float P2;
};

int main()
{
    int n, i;

    scanf("%d", &n);
    getchar();

    struct aluno** vetor = malloc(sizeof(struct aluno*)*n);

    if(vetor == NULL)
     return 1;

    for (i = 0; i < n; i++) 
      {
        vetor[i] = malloc(sizeof(struct aluno));
      }

    if(vetor == NULL)
     return 1;

  for(i = 0; i < n; i++)
  {
    fgets(vetor[i]->nome, 100, stdin);

    vetor[i]->nome[strcspn(vetor[i]->nome, "\n")] = 0;

    scanf("%f", &vetor[i]->RA);
    getchar();
    scanf("%f", &vetor[i]->P1);
    getchar();
    scanf("%f", &vetor[i]->P2);
    getchar();
  }

  for(i = 0; i < n; i++)
  {
    printf("%s: %.2f\n", vetor[i]->nome, ((vetor[i]->P1 + vetor[i]->P2)/2));
  }

  for (i = 0; i < n; i++) 
  free(vetor[i]);

  free(vetor);
}