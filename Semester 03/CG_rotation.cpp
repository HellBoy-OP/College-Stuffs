/*
* A c++ program to transform 2D.
* rotate a graph in computer graphics.
*/
#include<stdio.h>
#include<math.h>

#define FORM 3.14/180

// function to rotate and print rotated coordinates
void rotation(int x, int y, int j, double c, double s) {
    int new[2];
    new[0] = floor(x * c + y * s);
    new[1] = floor(-x * s + y * c);
    printf(">> [%d](%d, %d)\n", j, new[0], new[1]);
}

// main function
int main() {
    int num; // number of coordinates

    printf("Enter number of coordinates needed: ");
    scanf("%d", &num);

    // create array based of user input
    int x[num], y[num], j;
    double s, c, angle;

    // adding coordinate values to array
    for (j = 0; j < num; j++) {
        printf("Enter the coordinates (x, y) [%d]: ", j);
        scanf("%d %d", &x[j], &y[j]);
    }

    // input rotating angle
    printf("Enter rotation angle: ");
    scanf("%lf", &angle);

    // calculations and calling rotation function
    c = cos(angle *FORM);
    s = sin(angle *FORM);
    for (j = 0; j < num; j++) {
        rotation(x[j], y[j], j, c, s);
    }

    return 0;
}
