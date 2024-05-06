#include <stdio.h>
#include <stdlib.h>
struct employee

{  int id;
   char name[10];
    int age;
};
int main()
{

    struct employee *personPtr, person1;
    personPtr = &person1;

    printf("Enter id: ");
    scanf("%d", &personPtr->id);

    printf("Enter name: ");
    scanf("%s", personPtr->name);

     printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("id: %d\n", personPtr->id);
    printf("Name: %s\n", personPtr->name);
    printf("Age: %d\n", personPtr->age);

    return 0;
}
