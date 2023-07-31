#include <stdio.h>


int main()
{
    char operador;
    float operando, operando2;
    scanf("%f %c %f", &operando, &operador, &operando2);

    if(operador == '+')
      printf("%.3f+%.3f=%.3f\n", operando, operando2, operando+operando2);

    else if(operador == '-')
      printf("%.3f-%.3f=%.3f\n", operando, operando2, operando-operando2);

    else if(operador == '*')
      printf("%.3f*%.3f=%.3f\n", operando, operando2, operando*operando2);

    else if(operador == '/')
      printf("%.3f/%.3f=%.3f\n", operando, operando2, operando/operando2);

    else{
        printf("Operador invalido\n");
    }
       
}