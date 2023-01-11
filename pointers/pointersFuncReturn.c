#include <stdio.h>
#include <stdlib.h>

int Add(int* a, int* b) {
    //a and b are pointers to integers local to function
    int c = (*a)+(*b);
    printf("Address of a in Add = %d\n", &a);
    printf("Value in a of Add (address of x of main) = %d\n", a);
    printf("Value at address stored in a of Add = %d\n", *a);
    return c;
}

int* AddAndReturnPtr(int* a, int* b) {
    //a and b are pointers to integers local to function
    int c = (*a)+(*b);
    return &c;
}

void main() {
int x = 2, y = 4;
int z = Add(&x, &y); //x and y are integers local to main
int *ptr = AddAndReturnPtr(&x, &y);
printf("Address of a in main = %d\n", &x);
printf("Sum = %d\n",z);
printf("Sum = %d\n", *ptr);// while ptr might be pointing at whatever address c was allocated in, it can no longer be dereferenced because c was deleted after the function returned



}