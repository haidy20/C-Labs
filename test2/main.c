#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num;
  int i;
  int prime=0;
  scanf("%d",&num);

  for(i=2;i<num;i++)
  {
      if (num%i==0)
      prime=1;
      break;
  }
  if(prime==0)

    printf("its prime");
  else
    printf("its not prime");

return 0;

}
