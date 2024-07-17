#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char a[n];
    printf("Enter %d alphabet:",n);
    getchar();
    for(int i=0;i<n;i++){
        scanf("%c",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]=='A'|| a[i]=='a' || a[i]=='I'|| a[i]=='i' || a[i]=='E' || a[i]=='e' || a[i]=='o'|| a[i]=='O' || a[i]=='u' || a[i]=='U')
    {
       count++;
    }

    }

printf("%d",count);




}


