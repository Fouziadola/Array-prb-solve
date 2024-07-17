#include<stdio.h>
void main(){
 int n;
 scanf("%d",&n);
 int a[n][n],i,j;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
 }
 int sum=0;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j || i==n/2 || j==n-i-1 || j==n/2){
            sum+=a[i][j];
        }
    }
 }
 printf("%d",sum);
}
