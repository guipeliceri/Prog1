#include <stdio.h>

int main()
{
  float n, s;
  float resp, resp2, resp3;

  scanf("%f %f", &n, &s);
  float ns = n-s;
 

   resp = 1;

      while (n>1)
       {
          resp *= n--;
       }

   resp2 = 1;
      while(s>1)
      {
         resp2 *= s--;
      }


   
   resp3 = 1;
        while(ns>1)
       { 
           resp3 *= ns--;
       }

    printf("%.0f\n", resp/(resp2*resp3));
 
     
  return 0;
}