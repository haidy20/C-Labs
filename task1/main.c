#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("plz enter the grade");
    scanf("%d",&grade);
    if (grade>= 85)
       {printf("Excellent");}

    else if (grade >=75 && grade <85)
       {printf("very Good");}

    else if (grade >=65 && grade <75)
       {printf("Good");}

    else if (grade >=50 && grade <65)
       {printf("Normal");}

     else
         {printf("Failed");}

    return 0;
}
