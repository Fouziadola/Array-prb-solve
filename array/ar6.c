#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int sum_ar[n];
    int a1[n],a2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a2[i]);
    }
   for(int i=0;i<n;i++){
        sum_ar[i]=a1[i]+a2[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum_ar[i]);
    }
    printf("\n");

}
