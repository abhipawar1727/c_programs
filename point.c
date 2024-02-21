#include<stdio.h>


int main(){
int  n=10;
int *ptr=&n;
int n1=*ptr; // store a 'n' (variable address) in s varibale using (*=refernce & * pointer )

printf("value of n id :%d\n",n);
printf("Memory Address of n is : %d\n",&n);

printf("%d\n",ptr);
printf("%d\n",n1);
printf("%d",&ptr);

    return 0;
}