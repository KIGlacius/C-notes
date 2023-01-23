#include <stdio.h>
#include <stdlib.h>

    struct Book {
        char title[50];
        float price;
        int pages;
        char author[3][50];
    };

    /*
    typedef struct Book {
        char title[50];
        float price;
        int pages;
        char author[3][50];
    } Book;
    */

   typedef struct point {
    int x;
    int y;
   } point;

   void changeme(point p) {
        p.x = 10;
        p.y = 20;
   }

   void changemeV2(point *p) {
    p->x = 10;
    p->y = 20;
   }

   point changemeV3(point p) {
        p.x = 50;
        p.y = 75;

        return p;
   }

//-------------------------------------------------------------------------------------------------------
   void changeArray(int a[], int size) {
        int i;

        for(i = 0; i < size; i++) {
            a[i] = 10;
        }
   }
//-------------------------------------------------------------------------------------------------------
/*
 void changeArray(int *a, int size) { can also use pointer without changing anything in the function
        int i;

        for(i = 0; i < size; i++) {
            a[i] = 10;
        }
   }
*/

void main() {
    //Book b1
    struct Book b1;
    b1.price = 100.0;

    printf("%f\n", b1.price);

    struct Book *p; //p initially has garbage value and is not a struct. needs to point to an address first

    p = &b1; //p is still only a pointer

    //printf("%f\n", p.price); this is incorrect

    printf("%f\n", (*p).price); //need to dereference p

    p->price = 50; //preferred way of dereferencing
    printf("%f\n", p->price);
//-------------------------------------------------------------------------------------------------------
    struct Book b2[100];

    b2[1].price = 500;

   struct Book *q[10];

   q[0] = &b2[0];

   q[0]->price = 20;

   printf("%f\n", q[0]->price);
   printf("%d\n", q[0]);
//-------------------------------------------------------------------------------------------------------

point p1;
point *p2;

p2 = &p1;

p1.x = 100;
p1.y = 100;

changeme(p1);

printf("%d %d\n", p1.x, p1.y); //structs are called by value
//-------------------------------------------------------------------------------------------------------
changemeV2(p2);
printf("%d %d\n", p1.x, p1.y);  //calling by reference using pointer
//-------------------------------------------------------------------------------------------------------
p1 = changemeV3(p1);
printf("%d %d\n", p1.x, p1.y);  //calling by reference using pointer

//v2 method is most efficient way of function
//-------------------------------------------------------------------------------------------------------

int myarr[] = {10, 20, 30, 50};

changeArray(myarr, sizeof(myarr) / 4); // array name is the address of the first element of the array

for(int i = 0; i < sizeof(myarr)/4; i++) {
    printf("%d\n", myarr[i]);
}
}