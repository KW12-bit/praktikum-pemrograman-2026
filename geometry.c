#include "geometry.h"

float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

float circleArea(float radius) {
    return PI * radius * radius;
}

float rectangleArea(float length, float width) {
    return length * width;
}