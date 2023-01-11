#include <stdio.h>
#include <stdlib.h>

void main() {
    int B[2][3]; //2d array of 2 arrays with 3 elements
    B[0][0] = 2;
    B[0][1] = 3;
    B[1][0] = 4;
    //int *p = B would not work

    int (*p)[3] = B;

    printf("%d\n", B); //can also be written as &B[0]
    printf("%d\n", *B); //can also be written as B[0] or &B[0][0]

    printf("%d\n", B+1); //returns address of the first element of the second array
    printf("%d\n", *(B+1)); // or B[1] or &B[1][0]
    printf("%d\n", *(B+1)+2); //prints address of third element in second array
    printf("%d\n", *(*B+1)); //dereferences the second element in first array

    //B[i][j] is also *(*(B+i)+j) and *(B[i]+j)
}