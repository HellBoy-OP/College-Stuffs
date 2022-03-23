#include <stdio.h>

int main() {
    int x;
    int num1 = 0, num2 = 1, result = 0;    // declaring variables

    printf("Enter a number: ");
    scanf("%d", &x);    // taking inputs

    printf("Fibonacci Series: %d, %d, ", num1, num2);   // first two is always 0 & 1
    result = num1 + num2;   // 3rd fibonacci

    while (result <= x) { // print fibonacci until x is reached
        printf("%d, ", result);
        num1 = num2;
        num2 = result;
        result = num1 + num2;
    }
    
    return 0;
}
