#include <stdio.h>
int main() {
    int n, i, number, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integer numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be inserted: ");
    scanf("%d", &number);
    printf("Enter the position to insert the number: ");
    scanf("%d", &position);


    if (position < 0 || position > n) {
        printf("Invalid position\n");
        return 1;
    }

    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = number;


    printf("Updated array:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

