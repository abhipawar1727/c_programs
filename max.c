#include<stdio.h>
int main(){

int a[5],i,min;


printf("enter array value :\n");
  for ( i = 0; i <5; i++){
    scanf("%d",&a[i]);
      }

printf("small is !\n");

for(i=0;i<5;i++){

    if(a[i] <= min ){
    min=a[i];

   }
}
 printf("%d\n",min);
    return 0;
}