#include <stdio.h>
#include <math.h>

typedef struct Ponto{
     double x;
     double y;
   } Point;

int main()
{
   double resultado;

   Point p1;
   Point p2;

   scanf("%lf %lf", &p1.x, &p1.y);
   scanf("%lf %lf", &p2.x, &p2.y);

   
     p2.x -=  p1.x;
     p2.y -=  p1.y;

     p2.x *=  p2.x;
     p2.y *=  p2.y;

    resultado = p2.x + p2.y;

    resultado = sqrt(resultado);

if(resultado < 0.0000001)
{
    printf("os pontos sao iguais\n");
}
else
    printf("os pontos nao sao iguais\n");
}