#include <stdio.h>
#include <stdlib.h>

int main() {
 int i;
 int fact=1;
 int num;
 scanf("%d",&num);

 if(num<=0)
 {
     return 0;
 }

 else
 {
     for(i=1;i<=num;i++)
     {
         fact*=i;
     }
     printf("factorial of %d=%d",num,fact);
 }
 return 0;
}





















