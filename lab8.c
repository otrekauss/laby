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
  for(;;)
  {
    a = mygetch();
    if 
  }
}
