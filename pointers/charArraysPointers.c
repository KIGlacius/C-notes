#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(char *C) {
    while (*C != '\0') {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

void main() {
    char C[50];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';

    //above can also be written as

    char C2[20] = "John"; //this adds the null terminator implicitly
    char C3[] = "John";

    int len = strlen(C2);

    printf("%s %d\n", C2, len); //prints extra garbage values because compiler expected a null terminator
    printf("%s %d %d\n", C3, len, sizeof(C3)); //prints extra garbage values because compiler expected a null terminator

    char C4[20] = "Hello"; //string gets stored in the stack as an array
    char *C5 = "Hello"; //string gets stored as a constant during compilation that cannot be modified
    print(C4);
}