#include<stdio.h>

void add(int n,int n2);

int main(){
int num ,num2;
printf("enter num :");
scanf("%d",&num);

printf("enter num 2 :");
scanf("%d",&num2);
add(num,num2);

    return 0;
}

void add(int n,int n2){
int d=n+n2;
printf("%d",d);
}