#include<stdio.h>  
int main(){    
int n[]={2,3,4,5,6};
int length = sizeof(n) / sizeof(n[0]);
int flag=0;


 for(int i=0; i<length; i++){
     if(n[i]%2 == 0){
     printf("%d\n",n[i]);
     flag==1;
     break;
     }
     else if(flag==0){
     printf("not %d\n");
     }
     else {
        printf("no");
     }
 
 
}
return 0;  
}    