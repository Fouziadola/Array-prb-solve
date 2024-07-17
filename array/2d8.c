
#include<stdio.h>
void main(){
 int n,i,j;
 scanf("%d",&n);
int a[n][n];

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);}
  }
  int max=a[0][0];
  int index1=0,index2=0;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i][j]>max){
            max=a[i][j];
            index1=i;
            index2=j;
        }

    }
  }
  printf("%d at locationa\index= [%d][%d] ",max,index1,index2);}
