/*
* A C program to calculate the area of the circle
*/
#include <stdio.h>
#include <conio.h>
#define pi 3.1415


// Prototype declaration
float Area(float radius);


int main() {
    // Declaring variables
    float area, radius;

    // Taking input of radius
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    // Calculating area and displaying output
    area = Area(radius);
    printf("\n• Area of circle : %.2f", area);

    return 0;
}

// This function calculates area
float Area(float radius){
   float area;
   area = pi * radius_circle * radius_circle;
   return area;
}
