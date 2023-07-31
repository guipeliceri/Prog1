#include <stdio.h>
#include <string.h>

void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
  int k, j;
  int i = 0;
  char naosim[4];
  float alternativas[3];
  char perguntas_test[102];

  struct perguntaresp
  {
    char tipo[6];
    char pergunta[102];
    float resposta;
  };

  struct perguntaresp c[15];

  printf("---Etapa de treinamento---\n");

  for (;;)
  {
    scanf("%s", c[i].tipo);
    if (strcmp(c[i].tipo, "FIM") == 0)
    {
      break;
    }
    limparBuffer();
    

    fgets(c[i].pergunta, 102, stdin);

   

    for (k = 0; k < 3; k++)
    {
      scanf("%f", &alternativas[k]);
    }

    limparBuffer(); 

     for (j = 0; j < 3; j++) 
    {
    if (strcmp(c[i].tipo, "INT") == 0)
    {
      printf("Alternativa correta eh %.f?\n", alternativas[j]);
    }
    else if (strcmp(c[i].tipo, "FLOAT") == 0)
    {
      printf("Alternativa correta eh %.2f?\n", alternativas[j]);
    }
      scanf("%3s", naosim);
      getchar();

     if (strcmp(naosim, "SIM") == 0)
    {  
    c[i].resposta = alternativas[j];
    break;
    }
    }
    i++;
  }
  limparBuffer(); 

  printf("---Etapa de testes---\n");
  
  i=0;

   do 
   {
     fgets(perguntas_test, 102, stdin);

     c[i].pergunta[strcspn(c[i].pergunta, "\n")] = '\0';
     perguntas_test[strcspn(perguntas_test, "\n")] = '\0';

     if(strcmp(perguntas_test, "FIM") == 0)
     {
      return 0;
     }
     
     int encontrado = 0;

     for(j=0; j<15; j++) 
     {
        if(strcmp(perguntas_test, c[j].pergunta) == 0)
        {
        encontrado = 1;

        if(strcmp(c[j].tipo, "INT") == 0)
        {
        printf("A resposta eh: %.f\n", c[j].resposta);
        }

        if(strcmp(c[j].tipo, "FLOAT") == 0)
        {
        printf("A resposta eh: %.2f\n", c[j].resposta);
        }
        break;
        }
      }
      if(encontrado == 0)
      {
      printf("Me desculpe, ainda não fui treinado para responder essa pergunta.\n");
      }
      i++;
   }
   while(strcmp(perguntas_test, "FIM") != 0);
}