#include <stdio.h>

int main() { 
    int x, y; // declaring variables

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y); // taking inputs

    if(x > y) {
        printf("%d is higher number.", x); // if x is greater
    }
    else {
        printf("%d is higher number.", y); // if y is greater
    }

    return 0;
}