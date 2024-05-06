#include <stdlib.h>
#include <stdio.h>
int main()
{
char ch;
int flag=0;
scanf("%c",&ch);

do
{
system("cls");
printf("\n new\n display\n exit\n");
ch=getch();
switch(ch)
{
case 'n':
printf("new");
break;

case 'd':
printf("display");
break;

case 'e':
printf("exit");
flag=1;
break;

default:
printf("no here");

}

}
while(flag==0);
return 0;
}
