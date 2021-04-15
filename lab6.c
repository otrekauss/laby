#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand() % 21 - 10;
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
int main()
{
    srand(time(NULL));
    int n, a[n], i, m, index, k, l, j;
    printf("Vvedite n: ");
    scanf("%d", &n);
    fill(n, a);
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
    printf("Vvedite element:");
    scanf("%d", &m);
    index = el(n, m, a);
    printf("index = %d\n", index));
    if (index != 100)
    {

            for (i = 0; i < index / 2; i++)
          {
              k = a[i];
              a[i] = a[index - i - 1];
              a[index - i - 1] = k;
          }


            for (i = index + 1; i < n - index; i++)
            {
                l = a[i];
                a[i] = a[n - i + index];
                a[n - i + index] = l;
            }

      }
      else
      {
          for (i = 0; i < n / 2; i++)
          {
              j = a[i];
              a[i] = a[n - i -1];
              a[n - i - 1] = j;
          }
      }
      for (i = 0; i < n; i++)
      {
          printf("%d\t", a[i]);
      }
      printf("\n");
      return 0;
}
