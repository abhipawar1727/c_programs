#include<stdio.h>

void max(int *x , int *y );

int main(){

     int a=10,b=20;
     max(&a,&b);

    return 0;
}


void max(int *x , int *y){

if(*x > *y){
    printf("max is x:%d",*x);
}else if(*y > *x){
    printf("max id y :%d",*y);
}

}