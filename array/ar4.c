#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    float a[n];
    float sum=0;
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    float avg=sum/n;
    printf("%f",avg);
}
