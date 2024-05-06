#include <stdio.h>
#include <stdlib.h>

int main()
{
 int degree;
    printf("plz enter the degree");
    scanf("%d",&degree);
    if(degree>=90 && degree<= 100)
       {printf("Excellent");}
    else if (degree >=80 && degree <90)
       {printf("Very Good");}
    else if (degree >=70 && degree <80)
       {printf("Good");}
    else if (degree >=60 && degree <70)
       {printf("Acceptable");}
    else
       {printf("Fail");}

    return 0;
}
