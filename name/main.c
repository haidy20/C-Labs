#include <stdio.h>
#include <stdlib.h>
int main()
{
char fname [7]="haidy";
char lname[7]="essam";
char fullname[18];
scanf("%s",fname);
scanf("%s",lname);

strcpy(fullname,fname);
strcat(fullname," ");
strcat(fullname,lname);

printf("%s",fullname);
    return 0;
}





























