#include<stdio.h>
void main(){
    int n,m,i;
    scanf("%d",&n);
    int a[100],b[100],temp;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
         temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    for(int i=0;i<m;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
