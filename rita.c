#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s
{
    char surname[100];
    char name[100];
    char otchestvo[100];
    char bday[100];
    char bmonth[100];
    char byear[100];
    char adres[100];
    char phone[100];
    char a[100];
};

char dobavlenie(struct s friends[100], int k)
{
    for (int i = k; i < k + 1; i++)
    {
        printf("Write surname -> ");
        scanf("%s", friends[i].surname);
        printf("Name -> ");
        scanf("%s", friends[i].name);
        printf("Otchestvo -> ");
        scanf("%s", friends[i].otchestvo);
        printf("Bday -> ");
        scanf("%s", friends[i].bday);
        printf("Bmonth(number) -> ");
        scanf("%s", friends[i].bmonth);
        printf("Byear -> ");
        scanf("%s", friends[i].byear);
        printf("Adres -> ");
        scanf("%s", friends[i].adres);
        printf("Phone number -> ");
        scanf("%s", friends[i].phone);
    }
}

char delete (struct s friends[100], int p)
{
    printf("About kakogo cheloveka you want to delete information -> ");
    scanf("%d", &p);
    struct s e4 = {" ", " ", " ", " ", " ", " ", " ", " "};
    friends[p - 1] = e4;
    printf("%s", friends[p]);
}

char vivod(struct s friends[100], int i)
{
    printf("%s ", friends[i].surname);
    printf("%s ", friends[i].name);
    printf("%s ", friends[i].otchestvo);
    printf("%s ", friends[i].bday);
    printf("%s ", friends[i].bmonth);
    printf("%s ", friends[i].byear);
    printf("%s ", friends[i].adres);
    printf("%s ", friends[i].phone);
}

char choose(struct s friends[100], int l)
{
    printf("Enter month whatever you want(number) -> ");
    scanf("%s", friends[l].a);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(friends[i].bmonth, friends[l].a) == 0)
        {
            vivod(friends, i);
        }
    }
    printf("\n");
}
//Друзья. Фамилия, имя, отчество, дата рождения, адрес, телефон. Получить
//данные о всех друзьях, родившихся в заданном месяце.

int main()
{
    int l = 1, p, r, n, k = 3;
    struct s friends[100];
    struct s e = {"kjlsdljkd", "dsklj", "jkasj", "2", "12", "1999", "siod", "5558985"};
    friends[0] = e;
    struct s e1 = {"kjl", "lj", "j", "3", "11", "1996", "s", "8985"};
    friends[1] = e1;
    struct s e2 = {"kd", "j", "jj", "4", "10", "1997", "fdgdr", "58985"};
    friends[2] = e2;
    printf("Choose what do you want to do:\n1. You want to add dopolnitelnyu information\n");
    printf("2. You want to delete some information\n");
    printf("3. You want to get polnii list of all people\n");
    printf("4. You want to find information about konkretnom person\n");
    printf("5. You want to vivesti information po month rozdenia\n");
    printf("6. Bye\n");
    for (;;)
    {
        printf("Your choice is -> ");
        scanf("%d", &n);
        switch (n)
        {
            case 1:
                dobavlenie(friends, k);
                k++;
                break;
            case 2:
                delete (friends, p);
                break;
            case 3:
                for (int i = 0; i <= k; i++)
                {
                    vivod(friends, i);
                    printf("\n");
                }
                break;
            case 4:
                printf("Which person do you want to find informasion about(nachinaya s 1) -> ");
                scanf("%d", &r);
                vivod(friends, r - 1);
                break;
            case 5:
                choose(friends, l = 1);
                break;
            case 6:
                goto kr;
        }
    }
kr:
    return 0;
}
