#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define null -32


void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{

    int row ,col,val;
   int size;
         printf("please enter your size odd");
         scanf("%d",&size);


    row =1;
    col= (size +1)/2;
    val=1;
    int i;

    for(i=1; i<=size*size;i++ )
    {
        gotoxy(col*5,row);
        printf("%d",val);
        if (val%size==0)
        {
            row++;
        }
        else
        {

       row--;
       col--;
        }
        if (row==0)
        row =size;
        if (col==0)
        col=size ;
        val++;
    }

return 0;
}



