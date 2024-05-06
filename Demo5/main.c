#include <stdio.h>
#include <stdlib.h>

int main()
{

int num;
int num2;
scanf("%d",&num);
scanf("%d",&num2);

int sum= num + num2;
printf("%d + %d = %d",num,num2,sum);
int sub= num - num2;
printf("\n %d - %d = %d",num,num2,sub);
int multi= num * num2;
printf("\n %d * %d = %d",num,num2,multi);
return 0;
}
