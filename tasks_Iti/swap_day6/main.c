#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y);
int main()
{
    int x;
    int y;
    printf("before swapping x then y:");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("after swapping x=%d y=%d", x,y);

    return 0;
}
void swap(int *a,int *b)
{
    int process= *a;
    *a=*b;
    *b= process;

}
