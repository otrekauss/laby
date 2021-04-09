 #include <stdio.h>
 #include <math.h>
 int main()
 {
   double x0, x, h1, h2, f, s1, s2, x1, x2, d, e;
   int i, n, j;
   printf("Vvedite tochnost: ");
   scanf("%lf", &e);
   n = 2;
   x0 = -1.0;
   s1 = 0.0;
   s2 = 0.0;
   d = 1000.0;
   while (d >= e)
   {
     s1 = 0;
     s2 = 0;
     h1 = (2.0 - (-1.0)) / n;
     h2 = (2.0 - (-1.0)) / (2.0 * n);
     for (i = 0; i <= n - 1; i++)
     {
         x = x0 + i * n;
         x1 = x + h1 / 2;
         if (x <= 1.0)
             f = exp(-2.0 * sin(x1));
         else
             f = x1 * x1 - (1.0 / tan(x1));
        s1 += f;
     }
     s1 = h1 * s1;
     for (j = 0; j <= 2 * n - 1; j++)
     {
         x = x0 + j * 2.0 * n;
         x2 = x + h2 / 2.0;
         if (x <= 1.0)
             f = exp(-2.0 * sin(x2));
         else
             f = x2 * x2 - (1.0 / tan(x2));
        s2 += f;
     }
     s2 = h2 * s2;
     d = fabs(s2 - s1) / 3.0;
     n = 2 * n;
   }
   printf("%lf\n", s2);
   return 0;
 }
