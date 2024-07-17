#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
   int a[n];
   printf("Enter %d integers:",n);
   int ar[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++){
    printf("%d",a[i]);
   }
   printf("\n");
   for(int i=0;i<n;i++){
    ar[i]=a[n-i-1];
   }
   for(int i=0;i<n;i++){
    printf("%d",ar[i]);
   }

}
