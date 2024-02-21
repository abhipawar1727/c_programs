#include<stdio.h>
int main(){
   int n;
  int *ptr=&n;
  *ptr=10;
   

   printf("%d\n",n);
   *ptr=10*10;

   printf("%d",n);
    return 0;
}