#include<stdio.h>
int main(){

int choice;
int a,b,c=0;
printf("1.add 2.sub\n");
printf("enter your choice :");
scanf("%d",&choice);
switch (choice)
{
case 1:
    printf("enter a :");
    scanf("%d",&a);
    
    printf("enter b :");
    scanf("%d",&b);
    c=a+b;

    printf("%d",c);
    break;
case 2:
    
    printf("enter a :");
    scanf("%d",&a);
    
    printf("enter b :");
    scanf("%d",&b);
    c=a-b;
    printf("%d",c);
    break;

default:printf("wrong input");
   
}

    return 0;
}