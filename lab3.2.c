#include <stdio.h>
#include <math.h>
int main()
{
    double x0, x, h, f;
    int i, n;
    printf("Vvedite shag h: ");
    scanf("%lf", &h);
    printf("x\t\t f(x)\n");
    printf("-----------------------\n");
    x0 = -1.0;
    n = (2 - (-1)) / h;
    for (i = 0; i <= n; i++)
    {
        x = x0 + i * h;
        if (x <= 1.0)
            f = exp(-2.0 * sin(x));
        else
            f = x * x - (1.0 / tan(x));
        printf("%lf\t\t %6.4lf\n", x, f);
    }
    return 0;
}
