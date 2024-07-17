
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
        if(i%2!=0){
            printf("0 ");
        }
        else{
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}
