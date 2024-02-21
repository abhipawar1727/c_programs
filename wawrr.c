#include<stdio.h>

int add(int x , int y){
    return x+y;
}
//with argument with return
int main(){
    int a,b,c;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    c=add(a,b);
    printf("sum is :%d",c);
    return 0;
}