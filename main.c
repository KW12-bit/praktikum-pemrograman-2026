#include <stdio.h>
#include "geometry.h"

int main() {
    printf("Segitiga  : %.2f\n", triangleArea(10, 4));
    printf("Lingkaran : %.2f\n", circleArea(7));
    printf("Persegi   : %.2f\n", rectangleArea(8, 5));
    return 0;
}