#include<stdio.h>
void main(){
int n,i,j;
scanf("%d",&n);
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Major diagonal:");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
printf("%d ",a[i][j]);
    }
}
}
printf("\nminor diagonal:");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
        if(j==n-i-1)

    {
       printf ("%d ",a[i][j]);
    }
    }
}
}



