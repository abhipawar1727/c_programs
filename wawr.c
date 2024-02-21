#include<stdio.h>

void add(){
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    c=a+b;
    printf("sum is :%d",c);
}

//without argument no return 
int main(){
    add();
    return 0;
}