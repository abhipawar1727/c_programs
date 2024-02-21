#include<stdio.h>
int main(){
int a[]={1,2,3,4,5,6,7,8};
int i , s=0,t=0, len = sizeof(a)/sizeof(a[0]);    
for(i=0 ;i<len;i++){
    if(a[i]% 2== 0){
        s=s+a[i];
    }
    else{
        t=t+a[i];
    }

}
printf("%d\n",s);
printf("%d",t);
    return 0;
}