#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct s
{
    char name[100];
    char stars[5];
    char adres[100];
    char tel[100];
    char nomera[200];
    char luks[100];
    char svobod[200];
};
int main()
{
    struct s hotel[20];
    struct s e0 = {"efj", "1", "hefeh", "612337", "115", "13", "35"};
    hotel[0] = e0;
    struct s e1 = {"dujw", "3", "gjeju", "643728", "197", "20", "12"};
    hotel[1] = e1;
    struct s e2 = {"jfh", "5", "suiieu", "874981", "154", "10", "3"};
    hotel[2] = e2;
    return 0;
}
