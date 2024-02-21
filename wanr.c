#include<stdio.h>

void add(int x , int y){
int c = x + y;
printf("sum is :%d",c);
}
// with argument no return 

int main(){
    int num_1 , num_2, sum;
    printf("enter first number :");
    scanf("%d",&num_1);
     printf("enter second number :");
    scanf("%d",&num_2);
     add(num_1,num_2);
    return 0;
}