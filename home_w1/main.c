#include <stdio.h>
int main()
{
    int n,i,j,prime;
    printf("Enter the Number");
    scanf("%d", &n);
    printf("Prime Numbers are \n");
    for (i = 2; i <= n; i++)
    {
        prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            else
            {
                    prime=1;
            }
        }
            if (prime == 1)
            printf("%d ", i);
    }
    return 0;
}
