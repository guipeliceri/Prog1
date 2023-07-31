#include <stdio.h>

float volume_esfera(float x){

    int i;
    float contasx = (4.0/3.0) * 3.14159 * x * x * x;

    return contasx;
}

int main()
{
     float x;
    scanf("%f", &x);


    printf("%.2f\n", volume_esfera(x));

}