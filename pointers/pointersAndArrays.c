#include <stdio.h>
#include <stdlib.h>

int sumOfElements(int A[], int size) {
int i, sum = 0;

for(i = 0; i < size; i++) {
    sum += A[i];

}
return sum;
}

void Double(int *A, int size) {
    int i = 0, sum = 0;
    for(i; i < size; i++) {
        A[i] = 2 * A[i]; 
    }
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

   //when compiler sees array as function argument it does not copy the whole array, it creates a pointer valuable to the array and copies the address of the first element in the array. Arrays are always passed as reference arguments

    Double(A, size);
    for (int i = 0; i < size; i++) {
        printf("%d\n", *(A + i));
    }


}
