#include<stdio.h>
void alpha(char *start , char *end);

int main(){
 char start = 'A';
 char end   = 'Z';

 alpha(&start , &end);
 printf("%c",start);

    return 0;
}

void alpha(char *start , char *end){

    for(int i='A';i<='Z';i++){
          printf("%c\n",i);
    }
}