#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fill(int n, int m, int *a)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i * m + j] = rand() % 31 - 15;
    return 0;
}
int sum(int n, int m, int *a)
{
    int k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if ((i == j) || (i - j == 1) || (j - i == 1))
                k += a[i * m + j];
        }
    return k;
}
int transp(int n, int m, int *a, int *b)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            b[i * m + j] = a[j * n + i];
            // p = a[j * n + i];
            // a[j * n + i] = a[i * m + j];
            // a[i * m + j] = p;
        }
    return 0;
}
int nuli(int n, int m, int *a)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if ((i != j) && (i - j != 1) && (j - i != 1))
                a[i * m + j] = 0;
        }
    return 0;
}
int out1(int n, int m, int *a)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("% 7d", a[i * m + j]);
        printf("\n");
    }
    return 0;
}
int out2(int n, int m, int *a)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("% 7d", a[i * m + j]);
        printf("\n");
    }
    return 0;
}
int main()
{
    srand(time(NULL));
    int *a, *b, n, m, k, h;
    printf("Vvedite n, m: ");
    scanf("%d%d", &n, &m);
    a = (int *)malloc(n * m * sizeof(int));
    b = (int *)malloc(n * m * sizeof(int));
    if (NULL == a)
    {
        printf("Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }
    if (NULL == b)
    {
        printf("Memory allocation error!\n");
        exit(EXIT_FAILURE);
    }
    fill(n, m, a);
    out1(n, m, a);
    k = sum(n, m, a);
    printf("k = %d\n", k);
    printf("Vvedite chislo:");
    scanf("%d", &h);
    if (k > h)
        transp(n, m, a, b);
    else
        nuli(n, m, a);
    if (n == m || k < h)
        out1(n, m, a);
    else
        out2(n, m, b);
    free(a);
    return 0;
}
