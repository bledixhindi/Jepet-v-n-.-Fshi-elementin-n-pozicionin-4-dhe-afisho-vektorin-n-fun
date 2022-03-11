#include <stdio.h>
int main()
{
   int v[100], p, i, n;

   printf("Vendos nr e elementeve:\n");
   scanf("%d", &n);

   printf("Vendos %d numrat\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &v[i]);

   printf("Vendos pozicionin qe do te fshish\n");
   scanf("%d", &p);

   if (p >= n+1)
      printf("Nr i pozicionit gabim.\n");
   else
   {
      for (i = p - 1; i < n - 1; i++)
         v[i] = v[i+1];

      printf("Rezultat:\n");

      for (i = 0; i < n - 1; i++)
         printf("%d\n", v[i]);
   }

   return 0;
}
