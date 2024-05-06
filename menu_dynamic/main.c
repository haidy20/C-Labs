#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}
struct emp
{
    int id;
    char name[10];
    int age;
};
int size ;
int check(struct emp arr[],int index,int targetid) ;
void add(struct emp arr[],int index);
void display(struct emp arr[]);
void deleteId(struct emp arr[]);
int found(struct emp arr[]);
void deletename(struct emp arr[]);
int main()
{
    printf("pls add size ");
    scanf("%d",&size);
    char menu[5][20]= {"new","display","delete by id","delete by name","exit"};
    int i;
    int stop=0;
    int cursour=0;
    int flag=0;
    char ch;
    int newindex;
    char overwrite;
    struct emp *arr=(struct emp *)malloc(size*sizeof(struct emp));
    int j;
    for(j=0; j<size; j++)
    {
        arr[j].id=-1;
    }
    do
    {
        system("cls");
        for(i=0; i<5; i++)
        {
            if(cursour==i)
                textattr(0x27);
            gotoxy(5,i+2);
            printf("%s\n",menu[i]);
            textattr(0x07);
        }
        ch=getch();
        switch(ch)
        {
        case -32:
            ch=getch();
            switch(ch)
            {
            case 80:
                cursour++;
                if(cursour>4)
                    cursour=0;
                break;
            case 71:
                cursour=0;
                break;
            case 72:
                cursour--;
                if(cursour<0)
                    cursour=4;
                break;
            case 79:
                cursour=2;
                system("cls");
                printf("%s",menu[cursour]);
                getch();
                break;
                break;
            }
            break;
        case 13:
            system("cls");
            switch(cursour)
            {
            case 0:
                printf("enter the index");
                scanf("%d",&newindex);
                if(arr[newindex].id!=-1&&newindex<size&&newindex>=0)
                {
                    printf("you want to overwrite this id ?");
                    do
                    {
                        overwrite=getch();
                        switch(overwrite)
                        {
                        case 'y':
                        case 'Y':
                            arr[newindex].id=-1;
                            add(arr,newindex);
                            stop=1;
                            break;
                        case 'n':
                        case 'N':
                            stop=1;
                            break;
                        }
                    }

                    while(stop==0);
                }
                else if(arr[newindex].id==-1&&newindex<size&&newindex>=0)
                {
                    add(arr,newindex);
                }
                else
                {
                    printf("index is out of range");
                }
                break;
            case 1:
                display(arr);
                break;
            case 2:
                if(found(arr)==1)
                {
                    deleteId(arr);
                }
                else{
                printf("no data for delete");
                }
                break;
            case 3:
                deletename(arr);
                break;
            }
            getch();
            break;
        case 27:
            flag=1;
            break;
        }
    }
    while(flag==0);
    return 0;
}
int check(struct emp arr[],int index,int targetid)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(i!=index)
        {
            if(arr[i].id==targetid )
            {
                return 1;
            }
        }
    }
    return 0;
}
void add(struct emp arr[],int index)
{

    printf("pls add id ?");
    scanf("%d",&arr[index].id);
    while(check(arr,index,arr[index].id)==1)
    {
        printf("this id is duplicated\n");
        scanf("%d",&arr[index].id);
    }
    printf("enter employee name\n");
    scanf("%s",arr[index].name);
    printf("enter employee age\n");
    scanf("%d",&arr[index].age);

}
void display(struct emp arr[])
{
    int data=0;
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i].id!=-1)
        {
            printf("%d\n",arr[i].id);
            printf("%d\n",arr[i].age);
            printf("%s\n",arr[i].name);
            data++;
        }
    }
    if(data==0)
        printf("no data");
}
int found(struct emp arr[])
{
    int i;
    for(i=0;i<size;i++){
    if(arr[i].id!=-1)
    {
        return 1;
    }
    }
    return 0;
}
void deleteId(struct emp arr[])
{
    int i,id;
    int found;
    printf("pls put id you want to delete");
    scanf("%d",&id);
    for(i=0; i<size; i++)
    {
        if(arr[i].id==id)
        {
            arr[i].id=-1;
            found=1;
            printf("delete successfully");
        }
        if(found==0)
        {
            printf("there is no data");
        }
    }
}

void deletename(struct emp arr[]){
    int i ;
    char name[10];
    int del;
    printf("pls add name you want to delete");
    gets(name);
    for(i=0;i<size;i++){
        if(strcmp(arr[i].name,name)==0){
            arr[i].id=-1;
            del =1;
            printf("delete name correct");
        }
        if(del==0){
            printf("there is no data");
        }
    }

}
