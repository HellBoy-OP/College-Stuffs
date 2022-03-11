/*
* A looped calculator made using C
* Supports 4 types of operations ['+', '-', '*', '/']
*/

#include <stdio.h>

// Prototypes
float calc(float);
float operation(float, char, float);


// Main function
int main() {
    float x, y, res;
    char op;

    printf("CALCULATOR RUNNING:\n\n");
    printf("Enter your arguments: ");
    scanf("%f %c %f", &x, &op, &y);  // Taking inputs

    // Loop starts here
    res = operation(x, op, y);
    printf("= %.2f", res);  // display output
    calc(res);
    return 0;
}


// Recursive function for loop
float calc(float x) {
    float y, res;
    char op;
    scanf(" %c %f", &op, &y);
    res = operation(x, op, y);
    printf("= %.2f", res);
    calc(res);
}


// All operations are executed in this function
float operation(float x, char oper, float y) {
    switch (oper) {
        case '+':
            return (x + y);
            break;
        case '-':
            return (x - y);
            break;
        case '*':
            return (x * y);
            break;
        case '/':
            return (x / y);
            break;
        default:
            printf("Wrong Operator selected!! \nError Code ");
            return -1;
            break;
    }
}
