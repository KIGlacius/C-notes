#include <stdio.h>
#include <stdlib.h>

void main() {
    //pointers need to be typed because of how each data type is stored. For example, an integer of 1025 stores in memory is split into four bytes each with 8 zeros representing binary values and addresses continuous to one another. Byte 0 will have a rightmost 1 to signify a value of 1 since 1 X 2 to the power of 0 is one. Byte 1 will have a 1 at the third most 0 since that value is 1024. The left most bit or the signed bit will be 0 since it is a positive number

    //even though a float also takes 4 bytes of memory it is stored in a different way than integers

    int a = 1025;
    int *p;
    p = &a;

    printf("size of integer is %d\n", sizeof(int));
    printf("Address =  %d, value = %d\n", p, *p);

    char *p0;
    p0 = (char*)p;
    
    printf("size of char is %d\n", sizeof(char));
    printf("Address =  %d, value = %d\n", p0, *p0); //the value of p0 is 1 because the machine is only looking at 1 byte since char is only 1 byte and the decimal value stored in the first byte of 1025 is 1

    printf("value = %d\n", *(p0+1)); //value is 4 because the decimal representation of byte 1 of the address p0 is pointing to is 4 since it is only looking at that one byte for chars

    //-----------------------------------------------

    void *p1; 
    p1 = p;

    //cannot dereference a void pointer, can only print the address. if you try to do arithmetic you get an error
}