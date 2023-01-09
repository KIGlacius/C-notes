#include <stdio.h>
#include <stdlib.h>

void main() {
    int a;
    int *p; //declare a pointer using *

    p = &a; //pointer now stores the address of a in RAM
    a = 5;

    printf("The address p is pointing to is %d\n", p); //p is the address of a
    printf("The address of a is %d\n", &a); 

    printf("The address of p is %d\n", &p); //&p is the original address of p
    printf("The value of p is %d\n", *p); //the dereference operator gets the value at the address p points to

    *p = 8;

    printf("The value of a is now %d\n", a); // changing the value at the address p points to changes the value of a if p is pointing to a

    int b = 20;
    *p = b;

    printf("The value of what p is pointing to is %d\n", *p); //since p is now pointing to b 20 is printed
    printf("The address of what p is pointing to is %d\n", p); //however, the address of p is still the original address which is the address of a because of p = &a;

    //can also declare the pointer in one line int * p = &a

    //-------------------------------------------------------------

    //pointer arithmetic

    printf("address p is %d\n", p); //assume p is 2002
    printf("address p is now %d\n", p+1); //p+1 is 2006 because if p is an integer, then incrementing takes it to the next integer because integers are 4 bytes

}