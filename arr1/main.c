#include <stdio.h>
#include <stdlib.h>
#define size 5

  int main() {
      int i;
       int arr[size]={0};
       int sum=0;

       for(i = 0; i < size; i++)
        {
            printf(" enter num %d \n", i+1);
            scanf("%d",&arr[i]);
        } //  عشان حركة ان اليوزر يدخل قيم  //
         for(i = 0; i < size; i++){
         sum+=arr[i];
         }
         printf("\n sum is =%d", sum);

         int max=arr[0];
         int min=arr[0];
         for(i = 0; i < size; i++){
            if (max< arr[i])
            {
                max=arr[i];

            }
            if ( min > arr[i])
                {
                min=arr[i];
            }
         }
          printf("\n max is : %d", max);
          printf(" \n min is : %d", min);

          int target;
          int flag=0;
          printf("\n plz enter value of the target you want:");
          scanf("%d",&target);
          for (i = 0; i < size; i++)
            {
            if (arr[i]== target)
                {

               flag=1;
               printf(" the position of your target is in %d",i);
               }

            }

               if(flag==0){
                printf("\n number is not here");
            }



   return 0;
   }
