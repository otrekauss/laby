 #include <stdio.h>
 #include <math.h>
 int main()
 {
      double x0, x, h1, h2, f, s1, s2, d, e;
      int i, n, j;
      printf("Vvedite tochnost: ");
      scanf("%lf", &e);
      n = 2;
      x0 = -1.0;
      d = 1000.0;
      while (d >= e)
      {
          s1 = 0.0;
          s2 = 0.0;
          h1 = (2.0 - (-1.0)) / n;
          h2 = (2.0 - (-1.0)) / (2.0 * n);
          for (i = 0; i <= n - 1; i++)
          {
              x = x0 + i * h1 + h1 / 2.0;
              if (x <= 1.0)
                  f = exp(-2.0 * sin(x));
              else
                  f = x * x - (1.0 / tan(x));
              s1 += f;
          }
          s1 = h1 * s1;
          for (j = 0; j <= 2 * n - 1; j++)
          {
              x = x0 + j * h2 + h2 / 2.0;
              if (x <= 1.0)
                  f = exp(-2.0 * sin(x));
              else
                  f = x * x - (1.0 / tan(x));
              s2 += f;
          }
          s2 = h2 * s2;
          d = fabs(s2 - s1) / 3.0;
          n = 2 * n;
      }
      printf("%lf\n", s2);
      return 0;
 }
