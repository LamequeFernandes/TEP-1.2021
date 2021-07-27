#include <stdio.h>
#include <math.h>

float distanciaPontos(long int x, long int y)
{
   float distancia = sqrt(x * x + y * y);
   return distancia;
}

int main()
{
   int n, d;
   int result = 0;
   int pont1, pont2;
   scanf("%d %d", &n, &d);

   if (n > 0 && n <= 200000 && d >= 0 && d <= 200000)
   {
      for (int i = 0; i < n; i++)
      {
         scanf("%d %d", &pont1, &pont2);
         if (distanciaPontos(pont1, pont2) <= d && pont1 <= 200000 && pont2 <= 200000 && pont1 >= -200000 && pont2 >= -200000)
            result++;
      }
   }
   printf("%d\n", result);
   
   return 0;
}