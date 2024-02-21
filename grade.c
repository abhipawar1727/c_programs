#include<stdio.h>
int main(){
int num;
printf("enter marks\n");
scanf("%d",&num);

if(num>=50 && num<=60){
    printf("E grade :%d\n",num);
}else if(num >=61&& num<=70){
    printf("D grade");
}else if(num >=71&& num<=80){
    printf("C grade");
}else if(num >=81&& num<=90){
    printf("B grade");
}else if(num >=91&& num<=100){
    printf("A grade");
}
else{
    printf("failure");
}

    return 0;
}