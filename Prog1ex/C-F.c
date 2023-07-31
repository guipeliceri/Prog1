#include <stdio.h>

int main()
{
    float celsius, farenheit;
  printf("Insira o valor em graus Celsius: "); 
  scanf("%f", &celsius);

    farenheit = celsius * 1.8 + 32;
    printf("O valor em graus Farenheit é: %.2f\n", farenheit);

}