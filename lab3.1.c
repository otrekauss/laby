#include <stdio.h>
#include <math.h>
int main()
{
    double x0, x, h, f, i, n;
    printf("Vvedite shag h: ");
    scanf("%lf", &h);
    printf("x\t\t f(x)\n");
    printf("-----------------------\n");
    x0 = -1;
    n = (2 - (-1)) / h;
    i = 0;
    while (i <= n)
    {
        x = x0 + i * h;
        if (x <= 1)
            f = exp(-2 * sin(x));
        else
            f = x * x - (1 / tan(x));
        printf("%5.3lf\t\t %6.4lf\n", x, f);
        i += 1;
    }
    return 0;
}
