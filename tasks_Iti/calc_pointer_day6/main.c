#include <stdio.h>
#include <stdlib.h>

void calc(int *a, int *b, int *sum, int*sub, int *multi );

int main() {
int a;
int b;
int sum;
int sub;
int multi;

 printf("Enter two numbers a and b:");
 scanf("%d %d",&a,&b);

 calc(&a,&b,&sum,&sub,&multi);
 printf("sum=%d\n sub=%d\n multi=%d",sum,sub,multi);
 return 0;
}
void calc(int *a, int *b, int *sum, int *sub, int *multi)
{
    *sum=*a+*b;
    *sub=*a-*b;
    *multi=*a**b;

}
