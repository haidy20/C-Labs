#include <stdio.h>
#include <stdlib.h>
int factorial(int);
int main()
{ int num;
  scanf("%d",&num);
  int result=factorial(num);
  printf("the factorial of %d =%d",num,result);
  return 0;
}
int factorial(int num)
{
int i;
int fact=1;
for(i=1;i<=num;i++)
{
    fact*=i;
}
return fact;
}

