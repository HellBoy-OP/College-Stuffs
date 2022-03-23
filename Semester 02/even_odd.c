#include <stdio.h>

int main() {
    int x; // declaring variables

    printf("Enter a number: ");
    scanf("%d", &x); // taking input

    if(x % 2 == 0) {
        printf("%d is even number.", x); // if x is even
    }
    else {
        printf("%d is odd number.", x); // if y is odd
    }

    return 0;
}
