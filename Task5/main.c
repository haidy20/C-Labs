#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int sum =0;
    while( sum<100)
    {
        printf("plz enter the value");
        scanf("%d",&x);
        sum+=x;
    }
            printf("%d",sum);

    return 0;
}

