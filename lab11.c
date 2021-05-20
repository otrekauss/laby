#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct s
{
    char name[100];
    char stars;
    char adres[100];
    char tel[100];
    char nomera;
    char luks;
    char svobod;
};

int out(struct s hotel[])
{
    for (int i = 0; i < 4; i++)
        printf("%s %d %s %s %d %d %d\n", hotel[i].name, hotel[i].stars, hotel[i].adres, hotel[i].tel, hotel[i].nomera, hotel[i].luks, hotel[i].svobod);
    return 0;
}

int poisk(struct s hotel[], int n)
{
    printf("%s %d %s %s %d %d %d\n", hotel[n - 1].name, hotel[n - 1].stars, hotel[n - 1].adres, hotel[n - 1].tel, hotel[n - 1].nomera, hotel[n - 1].luks, hotel[n - 1].svobod);
    return 0;
}

int main()
{
    struct s hotel[100];
    struct s e0 = {"efj", 1, "hefeh", "612337", 115, 13, 35};
    hotel[0] = e0;
    struct s e1 = {"dujw", 3, "gjeju", "643728", 127, 20, 12};
    hotel[1] = e1;
    struct s e2 = {"jfh", 5, "suiieu", "874981", 100, 10, 3};
    hotel[2] = e2;
    struct s e3 = {"fhwf", 5, "uhiwf", "928428", 113, 5, 15};
    hotel[3] = e3;
    int i, k = 0, n;
    char max;
    for (i = 1; i < 4; i++)
        if (hotel[i].stars > hotel[i - 1].stars)
            max = hotel[i].stars;
    for (i = 0; i < 4; i++)
        if (hotel[i].stars == max)
            if (hotel[i].svobod > k)
                k = hotel[i].svobod;
    for (i = 0; i < 4; i++)
    {
        if (hotel[i].stars == max && hotel[i].svobod == k)
            printf("%s %d %s %s %d %d %d\n", hotel[i].name, hotel[i].stars, hotel[i].adres, hotel[i].tel, hotel[i].nomera, hotel[i].luks, hotel[i].svobod);
    }
    printf("\n");
    out(hotel);
    printf("\nnumber of hotel -> ");
    scanf("%d", &n);
    poisk(hotel, n);
    return 0;
}
