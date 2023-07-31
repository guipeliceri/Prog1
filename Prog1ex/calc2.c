#include <stdio.h>
#include <math.h>

float soma (float x, float y);
float subtracao (float x, float y);
float multiplicacao (float x, float y);
float divisao (float x, float y);
float potenciacao (float x, float y);

int main()
{
  char operador; 
  float a, b;
  
  scanf("%f %c %f", &a, &operador, &b);

  if(operador == '+')
    printf("%.3f\n", soma(a,b));
  
  else if(operador == '-')
    printf("%.3f\n", subtracao(a,b));

  else if(operador == '*')
    printf("%.3f\n", multiplicacao(a,b));
 
  else if(operador == '/')
    printf("%.3f\n", divisao(a,b));

  else if(operador == '^')
    printf("%.3f\n", potenciacao(a,b));

    return 0;
  
}

  float soma(float x,  float y)
  {
    float resultado;
    resultado = x+y;

    return resultado; 
  }
  
  float subtracao(float x,  float y)
  {
    float resultado;
    resultado = x-y;

    return resultado; 
  }

  float multiplicacao(float x,  float y)
  {
    float resultado;
    resultado = x*y;

    return resultado; 
  }

  float divisao(float x,  float y)
  {
    float resultado;
    resultado = x/y;

    return resultado; 
  }

  float potenciacao(float x,  float y)
  {
    float resultado;
    resultado = pow(x,y);

    return resultado; 
  }