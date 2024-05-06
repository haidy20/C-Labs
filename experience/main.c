#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
int arr[3][2]={{1,2},{4,5},{7,8}};
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        printf("\n arr[%d][%d]=%d",i,j,arr[i][j]);
         }
}
return 0;
}
