#include<stdio.h>

int add();



int main(int f){

 int a,b,c;
    add();
    return 0;
}

int add(int a,int b , int c){
     int d=c,e=b,f=c;
    printf("enter num a :");
    scanf("%d",d);
    
    printf("enter num b :");
    scanf("%d",e);
    f=d+e;
    return f;
    
}