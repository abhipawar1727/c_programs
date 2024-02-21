#include<stdio.h>

int add(int x,int y);
int sub(int x,int y);

int main(){
 int num1, num2,sum;
 

 printf("enter 1st number :");
 scanf("%d",&num1);
 printf("enter 2nd number :");
 scanf("%d",&num2);
 
 add(num1,num2);

 int subsract=sub(num1,num2);
 printf("sub is:%d",subsract);



    return 0;
}

int add(int x,int y){
    
    int sum =x+y;
    printf("sum is :%d \n ",sum);
}

int sub(int x,int y){
int sub=x-y;
return sub;
}