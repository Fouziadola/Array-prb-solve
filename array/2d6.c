#include<stdio.h>
void main(){
 int n,m,i,j;
 scanf("%d %d",&n,&m);
 int a[n][m],b[n][m];
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&a[i][j]);
    }
 }
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        scanf("%d",&b[i][j]);
    }
 }
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d ",a[i][j]+b[i][j]);
    }
    printf("\n");
 }


}
