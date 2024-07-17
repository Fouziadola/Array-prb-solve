#include<stdio.h>
void main(){
   int n,i;
   scanf("%d",&n);
   int a[n];
   printf("Give %d number integers:",n);

   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int max=a[0];
   int max_ind=0;
   for(i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
        max_ind=i;
    }
   }
   int min=a[0];
   int min_ind=0;
   for(i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
        min_ind=i;
    }
   }
   printf("Maximum=%d,max_ind=%d \nminimum=%d,min_ind=%d",max,max_ind,min,min_ind);
}
