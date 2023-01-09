#include <stdio.h>
#include <stdlib.h>

void main() {

    int x = 5;
    int *p = &x;
    *p = 6;
    int **q;
    q = &p; //q stores address of p and points to p
    int ***r;
    r = &q;

    printf("%d\n", *p); //prints value at x which is 6
    printf("%d\n", *q); //prints the address of p
    printf("%d\n", **q); //prints the value that p is pointing to
    printf("%d\n", ***r); //prints 6
    

}