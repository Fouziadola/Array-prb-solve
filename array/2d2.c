#include<stdio.h>

void main(){
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Row wise:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",a[i][j]);

        }
    }
    printf("\n");
    printf("column wise:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[j][i]);
        }
    }


}

