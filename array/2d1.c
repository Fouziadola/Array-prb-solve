#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}

}
