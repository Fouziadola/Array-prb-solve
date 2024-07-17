#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array:");
    for(int i=0;i<n;i++){
        if(a[i]%3==0){
            printf("-1 ");
        }
        else{
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}
