#include <stdio.h>
#include <math.h>

int soma(int x, int y)
{
 int n;
 n = x+y;
 return n;
}

int multi(int x, int y)
{
 int n;
 n = x*y;
 return n;
}

int main()
{
    int a, b, c, d, z, w;
    char oper;

    scanf("%d %d %c %d %d", &a, &b, &oper, &c, &d);

    if(oper == '+')
    {
       z = soma(a, c);
       w = soma(b, d);
    }
    else if(oper == '*')
    {
       z = multi(a, c) - multi(b, d);
       w = soma(multi(a, d),multi(b, c));
    }
    
    printf("%d + %di\n", z, w); 
}