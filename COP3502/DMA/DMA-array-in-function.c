#include <stdio.h>
#include <stdlib.h>

int* arrayFactory(int n) {
    int *arr = (int*) malloc(sizeof(int) * n);
    printf("Enter data for %d integers: ", n);
    for (int i=0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    return arr;
}

void displayarr(int *arr, int n) {
     for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void main() {
    int n;
    printf("What is the size of your array? :");
    scanf("%d", &n);

    int* p = arrayFactory(n);

    displayarr(p, n);

    free(p);
}