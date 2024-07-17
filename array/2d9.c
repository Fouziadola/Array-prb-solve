
#include <stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sumFirstR = 0, sumLastR = 0, sumMajorD = 0, sumMinorD = 0;

    for (int i = 0; i < n; i++) {
        sumFirstR += arr[0][i];
        sumLastR += arr[n - 1][i];
        sumMajorD += arr[i][i];
        sumMinorD += arr[i][n - 1 - i];
    }

    printf("%d",(sumFirstR+sumLastR+sumMajorD+sumMinorD)-(arr[0][0]+arr[0][n-1]+arr[n-1][0]+arr[n-1][n-1]+arr[n/2][n/2]));
}

