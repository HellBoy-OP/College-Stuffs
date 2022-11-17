/*
* A c program to translate a 2d graph
* Transformation in 2D
*/

#include <stdio.h>


void translate(int x, int y, int tr_x, int tr_y, int j) {
    int new[2];
    new[0] = x + tr_x;
    new[1] = y + tr_y;
    printf(">> [%d](%d, %d)\n", j, new[0], new[1]);
}

int main() {
    int tr_x, tr_y, i;

    printf("Enter number of coordinates: ");
    scanf("%d", &i);

    int x[i], y[i], j;

    for (j = 0; j < i; j++) {
        printf("Enter the coordinates (x, y) [%d]: ", j);
        scanf("%d %d", &x[j], &y[j]);
    }

    printf("Enter translation unit (x, y): ");
    scanf("%d %d", &tr_x, &tr_y);

    for (j = 0; j < i; j++) {
        translate(x[j], y[j], tr_x, tr_y, j);
    }

    return 0;
}
