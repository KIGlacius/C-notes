#include <stdio.h>
#include <stdlib.h>

float func(float x) {
float y = 0.0;
float xSquare = x * x;
    y = xSquare - (2 * x) - 4;

    return y;
}

float getSlope(float x, float y, float fx, float fy) {

float slope = (fy - y) / (fx - x);
return slope;
}

void main() {
    float y = func(-.0001);
    printf("%f\n", y);

    float slope = getSlope(0, -4, -.0001, y);
    printf("%f\n", slope);

}
