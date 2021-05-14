#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int i, p, k = 0;
    char str[256];
    printf("stroka: ");
    scanf("%255[^\n]", str);
    p = strlen(str);
    for (i = 0; i < p; i++)
    {
        if (isdigit(str[i]) && (isalpha(str[i + 1]) || str[i + 1] == ' ') && isdigit(str[i-1]) == 0)
            k += (int)str[i] - 48;
        if (isdigit(str[i]) && isdigit(str[i + 1]))
            k += ((int)str[i] - 48) * 10 + ((int)str[i + 1] - 48);
    }
    printf("%d\n", k);
    return 0;
}
