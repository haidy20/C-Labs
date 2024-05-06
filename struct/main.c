#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct emp
 {
     int id;
     char name[10];
     int age;
     int salary;
     int overtime;
     int deduction;

 };


int main()
{

struct emp e1;
int fullsalary;
 printf("plz enter the id:");
 scanf("%d",&e1.id);

 printf("plz enter the name:");
 scanf("%s",&e1.name);

 printf("plz enter the age:");
 scanf("%d",&e1.age);

 printf("plz enter the salary:");
 scanf("%d",&e1.salary);

 printf("plz enter the overtime:");
 scanf("%d",&e1.overtime);

 printf("plz enter the deduction:");
 scanf("%d",&e1.deduction);

 fullsalary= (e1.salary+ e1.overtime)-e1.deduction;
 printf("\n id:%d \n name:%s \n age:%d \n full salary:%d",e1.id,e1.name,e1.age,fullsalary);

    return 0;
}
