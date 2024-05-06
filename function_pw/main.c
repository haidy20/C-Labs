#include <stdio.h>
#include <stdlib.h>
int power(int num,int e);
int main()
{   int num=1;
    int e;
 scanf("%d",&num);
 scanf("%d",&e);

 power(num,e);
 printf("power of num %d =%d",num, power(num,e));

 return 0;
}
int power(int num,int e)
{ int i;
  int pow=1;

for(i=1;i<=e;i++)
{
    pow*=num;

}
return pow;
}





