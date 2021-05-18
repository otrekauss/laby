#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i, p, k = 0, m = 0;
    char str[256];
    printf("stroka: ");
    scanf("%255[^\n]", str);
    p = strlen(str);
    for (i = 0; i < p; i++)
    {
        if (isdigit(str[i]) && str[i - 1] != '-')
            m = (10 * m) + ((int)str[i] - 48);
        else if (isdigit(str[i]) && str[i - 1] == '-')
            m = (10 * m) + (-1) * ((int)str[i] - 48);
        else
        {
            k += m;
            m = 0;
        }
    }
    k += m;
    printf("%d\n", k);
    return 0;
}
