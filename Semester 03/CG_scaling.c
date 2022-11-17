#include <stdio.h>


void scale(int x, int y, int sca_x, int sca_y, int j) {
    int new[2];
    new[0] = x * sca_x;
    new[1] = y * sca_y;
    printf(">> [%d](%d, %d)\n", j, new[0], new[1]);
}

int main() {
    int sca_x, sca_y, i;

    printf("Enter number of coordinates: ");
    scanf("%d", &i);

    int x[i], y[i], j;

    for (j = 0; j < i; j++) {
        printf("Enter the coordinates (x, y) [%d]: ", j);
        scanf("%d %d", &x[j], &y[j]);
    }

    printf("Enter translation unit (x, y): ");
    scanf("%d %d", &sca_x, &sca_y);

    for (j = 0; j < i; j++) {
        scale(x[j], y[j], sca_x, sca_y, j);
    }

    return 0;
}
