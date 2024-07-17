#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            sum+=a[i];
        }

    }
    printf("sum=%d",sum);
}
