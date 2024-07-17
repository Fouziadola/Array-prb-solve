#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers integers",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int d;
    printf("Enter a position:");
    scanf("%d",&d);
    printf("New array:");
    for(int i=0;i<n;i++){
        if(i!=d){
            printf("%d ",a[i]);
        }
    }
}
