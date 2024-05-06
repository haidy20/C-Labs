#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
 char ch;
 ch=getch();
 if(ch==-32)
  {
     printf("extend key %c",ch);
     ch=getch();
     printf("%c",ch);
  }
 else
  {
    printf("normal key %c",ch);

  }

 return 0;
}




