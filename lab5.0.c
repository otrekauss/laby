#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int n, int a[])
{
    for (int i = 0; i < n; i++)
        a[i] = rand() % 21 - 10;
}
int el(int n, int m, int a[])
{
  int i, index = 0;
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
int main()
{
    srand(time(NULL));
    int n, a[n], i, m;
    printf("Vvedite chislo elementov: ");
    scanf("%d", &n);
    fill(n, a);
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
    printf("Vvedite element:");
    scanf("%d", &m);
    printf("index = %d\n", el(n, m, a));
    return 0;
}
