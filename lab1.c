#include <stdio.h>
int main()
{
    int a, b, suma, sumb;
    float c, a1, b1;
    printf("Vvedite a,b:");
    scanf("%d", &a);
    scanf("%d", &b);
    a1 = a;
    b1 = b;
    suma = 0;
    while (a != 0)
    {
        suma = suma + a % 10;
        a = a / 10;
    }
    sumb = 0;
    while (b != 0)
    {
        sumb = sumb + b % 10;
        b = b / 10;
    }
    if (suma > sumb)
        c = sumb / a1;
    else
        c = suma / b1;
    printf("c=%f \n", c);
    return 0;
}
