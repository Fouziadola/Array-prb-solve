#include<stdio.h>
void main(){
    int n,d;
    scanf("%d",&n);
    int a[n];
    printf("%d integers number:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("give a number:");
    scanf("%d",&d);
 printf("Index position:");
    for(int i=0;i<n;i++){
      if(d==a[i]){
        printf("%d ",i);
      }

    }

}
