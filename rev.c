#include<stdio.h>

int main(){
  int array[]={1,2,3,4,5};
  int array2[]={1,2,3,4,5};
  int len= sizeof(array)/sizeof(array[0]);
  int len2= sizeof(array2)/sizeof(array2[0]);
  int i,j,sum=0;

  for(i=0;i<=len;i++){
    for(j=0;j<=len2;j++){
        if(array[i]==array[4]){
            if(array2[j]==array2[4]){
                sum=array[i]*array2[j];
            }
        }
    }
  }
  printf("sum is : %d",sum);
    return 0;
}