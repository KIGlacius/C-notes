#include <stdio.h>
#include <stdlib.h>

int sumOfElements(int A[], int size) {
int i, sum = 0;

for(i = 0; i < size; i++) {
    sum += A[i];

}
return sum;
}

void main() {
    /*
    int a[5] = {2, 4, 5, 8 , 1};
    int *p;
    p = a;

    printf("%d\n%d\n", *p, *a);
    printf("%d\n%d\n", &a[0], a[0]);
    printf("%d\n%d\n", a[0], *(a+1));
    ------------------------------------------------------------------
    */

   int A[] = {1, 2, 3, 4, 5};
   int size = sizeof(A)/sizeof(A[0]);
   int total = sumOfElements(A, size);
}
