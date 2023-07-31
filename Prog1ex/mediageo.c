#include <stdio.h>
#include <math.h>


float media(float x, float y, char ha);

int main()
{

float media(float x, float y, char ha)
{
    float resultado;

    if(ha == 'A')
    {
        resultado = (x + y)/2;
    }
    else if(ha == 'B')
    {
        resultado = sqrt(x*y);
    }
    
    return resultado;
}

char letra;
float num1, num2;

scanf("%c", &letra);
scanf("%f %f", &num1, &num2);

printf("%.3f\n", media(num1, num2, letra));
}