/*
#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 3
int main()
{
  int arr[row][col]={0};
  int i,j;
  int sum [row]={0};
  int sum2 [col]={0};
  //int ava[col]={0}
  int colavg;

  for (i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf(" plz put num for this arr ..");
        scanf("%d",&arr[i][j]);
    }
  }

   for(i=0;i<row;i++){
    for(j=0;j<col;j++){
         printf(" \t %d",arr[i][j]);
    }
    printf("\n");
   }
   for(i=0;i<row;i++){
    for(j=0;j<col;j++){
     sum[i]+=arr[i][j];
    }
    printf("sum of row no %d = %d \n",i+1 ,sum[i]);
   }
   float avg[col]={0};
      for(j=0;j<col;j++){
            for(i=0;i<row;i++){

               sum[j]+= arr[i][j];
    }
    avg[j]=avg[j]/col;
    printf("avg or col no %d = %f \n",j+1 ,avg[j]);
   }
    return 0;
}
*/



#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 2
int main()
{
  int arr[row][col]={0};
  int i,j;




  for (i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf(" pls put num for this arr ..");
        scanf("%d",&arr[i][j]);
    }
  }

   for(i=0;i<row;i++){
    for(j=0;j<col;j++){
         printf(" \t %d",arr[i][j]);
    }
    printf("\n");
   }
    int sum [row]={0};
   for(i=0;i<row;i++){
    for(j=0;j<col;j++){
     sum[i]+=arr[i][j];
    }
    printf("sum in row no %d = %d \n",i+1 ,sum[i]);
   }
   float avg[col]={0};
      for(j=0;j<col;j++){
            for(i=0;i<row;i++){
               avg[j]+= arr[i][j];
    }
    avg[j]=avg[j]/col;
    printf("avg of col no %d = %f \n",j+1 ,avg[j]);
   }
    return 0;
}
