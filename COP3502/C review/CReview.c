#include <stdio.h>
#include <stdlib.h>

void makeNULLtest(int *p) {
    p = NULL;
}

void main(void) {
   
int *q;

makeNULLtest(&q);

if (q == NULL) {
printf("%d", 50);
}

}


