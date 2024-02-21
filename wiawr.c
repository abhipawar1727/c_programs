#include<stdio.h>

int demo(){
    int a , b ,c;
    printf("enter 1st num:");
    scanf("%d",&a);
    printf("enter 2nd num:");
    scanf("%d",&b);
    c=a+b;
    return c;
      
}
//without arument with return 
int main(){
  
    int sum = demo();
   
   printf("%d",sum);
    return 0;

}