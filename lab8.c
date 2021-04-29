#include <ctype.h>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
int mygetch()
{
    struct termios oldt, newt;
    int c;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    c = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return c;
}
int main()
{
    unsigned char a;
    for (;;)
    {
        a = mygetch();
        if (a == 224)
        {
            a = mygetch();
            if (iscntrl(a))
                a = mygetch();
            if (a == 51)
                return 0;
        }
        else
        {
            if (isalnum(a))
                printf("%c", a);
            a = mygetch();
            if (a == 273)
                else printf("%d", a);
            //     }
            // }
            return 0;
        }
