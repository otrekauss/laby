#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <ctype.h>
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
  char a;
  //a = mygetch();
  for (;;)
  {
    a = mygetch();
    if (isalnum(a))
      printf("%c", a);
    // a = mygetch();
    // printf("%d\n", a);
    // a = mygetch();
    // printf("%d\n", a);
    // a = mygetch();
    // printf("%d\n", a);
    // a = mygetch();
    // printf("%d\n", a);
    // a = mygetch();
    // printf("%d\n", a);
    // printf("\n");
  }
  return 0;
}
