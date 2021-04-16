#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fill(int n, int m, int a[n][m])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = rand() % 31 - 15;
    return 0;
}
int sum(int n, int m, int a[n][m])
{
    int k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if ((i == j) || (i - j == 1) || (j - i == 1))
                k += a[i][j];
        }
    return k;
}
int transp(int n, int m, int a[n][m])
{
    int p;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
        {
            p = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = p;
        }
    return 0;
}
int nuli(int n, int m, int a[n][m])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if ((i != j) && (i - j != 1) && (j - i != 1))
                a[i][j] = 0;
        }
    return 0;
}
int out(int n, int m, int a[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("% 7d", a[i][j]);
        printf("\n");
    }
    return 0;
}
int main()
{
    srand(time(NULL));
    int n, m, k, h;
    printf("Vvedite n, m: ");
    scanf("%d%d", &n, &m);
    int a[n][m];
    fill(n, m, a);
    out(n, m, a);
    k = sum(n, m, a);
    printf("k = %d\n", k);
    printf("Vvedite chislo:");
    scanf("%d", &h);
    if (k > h)
        transp(n, m, a);
    else
        nuli(n, m, a);
    out(n, m, a);
    return 0;
}
