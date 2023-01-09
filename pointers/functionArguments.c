#include <stdio.h>
#include <stdlib.h>

void Increment(int a) {
    a = a+1;
    printf("Address of variable a in increment = %d\n", &a);
}

void Increment2(int *p) {
    *p = (*p) + 1;
}

void main() {
    int a;
    a = 10;
    Increment(a); //this function call does not return the expected value because the a passed into the function is created locally in its own stack frame rather than the original a in memory
    printf("Address of variable a in increment = %d\n", &a);

    Increment2(&a); //this works as expected because instead of passing in a copy of the value at the address of a, a dereferenced pointer pointing to the address of a is used as an argument. this is called call by reference. this method saves a lot of memory and improves performance
    printf("%d", a);
}