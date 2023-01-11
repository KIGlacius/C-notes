#include <stdio.h>
#include <stdlib.h>

void main() {
    //using dynamic memory allocation relies on the heap and not the stack as the stack has a limited amount of memory to work with while the heap can use as much as the entire system based on the code. 

    int a; //goes on stack

    int *p;// also goes on stack

    p = (int*)malloc(sizeof(int)); //malloc will return address from heap. typecasting is used because p was pointing to null
    *p = 10;
    free(p);
    p = (int*)malloc(sizeof(int));// p is now pointing to a new address. the previous malloc is still in the heap, which is now an unnecessary use of memory. if we don't need the previous address/value, we should call free(p) to free that memory
    *p = 20;

    p = (int*)malloc(20*sizeof(int)); //allocates memory for an array the size of 20 integers or 80 bytes

    //if malloc is unable to set aside enough memory in heap, it returns null

    //malloc can be defined as void* malloc(size_t size) where size is the size of the data type in bytes, size_t is unsigned int values (cannot be negative) and void* returns a void pointer that gives address of first byte in first block that it allocated

    void *q = malloc(sizeof(int));
    printf("%d\n", q);

    //cannot simply dereference q by doing *q = 2, have to first typecast q to integer since malloc returns void pointer

    int *k = (int*)malloc(3 * sizeof(int));
    *k = 2;

    printf("%d\n", *k);

    *(k+1) = 4;

    printf("%d\n", *(k+1));

    //---------------------------------------------------------------------------------------------------------------------

    // calloc can be defined as void* calloc(size_t num, size_t size) where num is the number of elements and size is the size of the data type. calloc allocation sets all byte positions with value 0 instead of garbage values like malloc

    //---------------------------------------------------------------------------------------------------------------------

    //realloc can be defined as void* realloc(void* Ptr, size_t size) the first argument is the pointer to the first memory address of the block reallocating and the second is the size of the new block

    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int A[n]; //supposedly you can't do this lmao, must be older version of C/compiler

    printf("%d\n", sizeof(A));

    int *B = malloc(n * sizeof(int));

    for (int i = 0; i <n; i++) {
        A[i] = i+1;
        printf("%d ", A[i]);
    }

    free(A);
    free(B);
}