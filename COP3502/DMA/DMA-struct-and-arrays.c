#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct BigInteger {
    int* digits;
    int size;
};

struct BigInteger * createRandomBigInt(int numdigits) {

    struct BigInteger *bi = (struct BigInteger *)malloc(sizeof(struct BigInteger));

    bi->digits = (int*) malloc(numdigits * sizeof(int));

    bi->size = numdigits;

    bi->digits[numdigits - 1] = 1+rand()%9;

    for(int i = 0; i < numdigits - 1; i++) {
        bi->digits[i] = rand()%10;
    }

    return bi;
    }

void displayDigits(struct BigInteger *b) {
    printf("The digits of the big integer: \n");

    for(int i = 0; i<b->size;i++) {
        printf("%d ", b->digits[i]);
    }
}


void main() {
    int n;
    printf("How many digits: ");
    scanf("%d", &n);

    struct BigInteger *mybi = createRandomBigInt(n);

    displayDigits(mybi);

    free(mybi->digits);
    free(mybi);
}