#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct Point {
    int x;
    int y;
} Point;

Point* pointFactory() {
    Point *p = (Point*) malloc(sizeof(Point));

    p->x = rand()%100;
    p->y = rand()%100;

    return p;
}

//How to create DMA struct array
Point* pointArrayFactory(int n) {
    Point *p = (Point*) malloc(sizeof(Point) * n); //while p is a pointer to an array of struct, p[0] is a struct

    for (int i =0; i < n; i++) {
        p[i].x = rand()%100; //p[i]-> is not valid because p[i] is a struct and not a pointer
        p[i].y = rand()%100;
    }

    return p;
}

//array of structure pointer in a function
Point** pointPointersFactory(int n, int maxXY) {
    Point** p = (Point**) malloc(sizeof(Point*) * n); //allocates memory for an array of pointers that are not pointing to anything yet. each pointer can then point to an array of structs or a single struct

    for(int i = 0; i < n; i++) {
        p[i] = (Point *)malloc(sizeof(Point)); //p[i] is now a pointer to a pointer to a struct
        p[i]->x = rand()%maxXY; //we use arrows now because p[i] is a pointer and not a struct like in pointArrayFactory()
        p[i]->y = rand()%maxXY;
    }

    return p;
}

void main() {
    int n;
    srand(time(0)); //srand change the seed of the random number generator

    Point *myPoint = pointFactory();

    printf("The point is %d %d\n", myPoint->x, myPoint->y);

    free(myPoint);
//-----------------------------------------------------------------------------------------------------
    printf("How many points: ");
    scanf("%d", &n);

    Point* q = pointArrayFactory(n);

    printf("All the points: \n");
    for(int i = 0; i < n;i++) {
        printf("%d %d\n", q[i].x, q[i].y); // we dont use arrow dereferencing because we are iterating through each struct and not the pointer itself
    }

    free(q);
//-----------------------------------------------------------------------------------------------------
    printf("How many pointsV2: ");
    scanf("%d", &n);

    printf("%d", n);
    Point** k = pointPointersFactory(n, 100);

    for(int i = 0; i < n;i++) {
        printf("%d %d\n", k[i]->x, k[i]->y);
        free(k[i]);
    }

    free(k); //cannot simply call free(k) because all of the allocated structs still exist in memory even if the pointers don't
}
