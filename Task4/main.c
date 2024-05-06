#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int prime;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for( i=2; i<n; i++)
    {
        if(n%i ==0) /*  يعنى بيقبل القسمة عليه مالاخر  */

    {
        prime=0;
        break;
    }
        else{
        prime=1;

    }
    }

        if(prime==1)
    {
        printf("Its Prime");
    }
        else
    {
        printf("Its not Prime");
    }

    return 0;
}
