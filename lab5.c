#include <stdio.h>
#include <math.h>

int nodc(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int nodr(int a, int b)
{
    if (a == b)
        return a;
    if (a > b)
        return a ? nodr(a - b, b) : a == b;
    else
        return b ? nodr(b - a, a) : b == a;
}

int main()
{
    int a, b;
    printf("Vvedite a,b: ");
    scanf("%d%d", &a, &b);
    printf("NOD1=%d\n", nodc(a, b));
    printf("NOD2=%d\n", nodr(a, b));
    return 0;
}
