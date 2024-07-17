#include<stdio.h>
void main(){
 int n,i,j;
 scanf("%d",&n);
int a[n][n];

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
    printf("\n");
  }
}
