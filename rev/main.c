#include <stdio.h>
#include <stdlib.h>

int main()
{
int num; int rev=0; int rem;
printf("enter number:");
scanf("%d",&num);
while(num !=0)
{
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}
printf("reversed number =%d",rev);
    return 0;
}
