#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 21 - 10;
}
int out(int n, int a[])
{
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}
int el(int n, int m, int a[])
{
    int i, index = 100;
    for (i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            index = i;
            break;
        }
    }
    return index;
}
int obmen1(int n, int index, int a[])
{
    for (int i = 0; i < index / 2; i++)
    {
        int k = a[i];
        a[i] = a[index - i - 1];
        a[index - i - 1] = k;
    }
    for (int i = index + 1; i < n - (n - index) / 2; i++)
    {
        int l = a[i];
        a[i] = a[n - i + index];
        a[n - i + index] = l;
    }
    return 0;
}
int obmen2(int n, int a[])
{
    for (int i = 0; i < n / 2; i++)
    {
        int j = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = j;
    }
    return 0;
}
int main()
{
    srand(time(NULL));
    int n, m, index;
    printf("Vvedite n: ");
    scanf("%d", &n);
    int a[n];
    fill(n, a);
    out(n, a);
    printf("\n");
    printf("Vvedite element:");
    scanf("%d", &m);
    index = el(n, m, a);
    printf("index = %d\n", index);
    if (index != 100)
        obmen1(n, index, a);
    else
        obmen2(n, a);
    out(n, a);
    printf("\n");
    return 0;
}
