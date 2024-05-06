#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct emp
 {
     int id;
     char name[10];
     int age;
     int salary;
     int overtime;
     int deduction;

 };

int check(int length , int targetid);
int main()
{
struct emp arr[2];
int i;
int j;
int fullsalary;

   for (i=0;i<2;i++)
{bool duplicated;
   printf ("please enter id ");
   scanf ("%d",&arr[i].id);
    do{
    duplicated=true;
    for(j=0;j<i;j++){
    if(arr[i].id==arr[j].id){
    duplicated=true;
    printf ("\n please enter another id ");
    scanf ("%d",&arr[i].id);
       break;}
  }
}
   while(duplicated== false);
 printf("plz enter the name:");
 scanf("%s",arr[i].name);

 printf("plz enter the age:");
 scanf("%d",&arr[i].age);

 printf("plz enter the salary:");
 scanf("%d",&arr[i].salary);

 printf("plz enter the overtime:");
 scanf("%d",&arr[i].overtime);

 printf("plz enter the deduction:");
 scanf("%d",&arr[i].deduction);
}


for(i=0;i<2;i++)
 {
fullsalary= (arr[i].salary+ arr[i].overtime)-arr[i].deduction;
printf("\n id:%d \n name:%s \n age:%d \n full salary:%d", arr[i].id,arr[i].name,arr[i].age,fullsalary);

 }

    return 0;
}
