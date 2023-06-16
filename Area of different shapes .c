#include <stdio.h>
//Area of different shapes

// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
    return 3.14159 * radius * radius;
}

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate the area of a square
float calculateSquareArea(float side) {
    return side * side;
}

// Function to calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius, length, width, side, base, height;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle: %.2f\n", calculateCircleArea(radius));

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of the rectangle: %.2f\n", calculateRectangleArea(length, width));

    printf("Enter the side length of the square: ");
    scanf("%f", &side);
    printf("Area of the square: %.2f\n", calculateSquareArea(side));

    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    printf("Area of the triangle: %.2f\n", calculateTriangleArea(base, height));

    return 0;
}