#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int flag=0;
    do{
            system("cls");
        printf("\n new \n display \n exit");
        ch =getch();
        switch(ch)
      {
        case 'n':
        case 'N':
            printf("\n  new is here");
            break;

        case 'd':
        case 'D':
            printf("\n display is here");
            break;

        case 'e':
        case'E':
            printf("\n exit is here");
            flag=1;
            break;
        case  27:
            flag=1;
      }
    }

    while(flag==0);
    return 0;
}
