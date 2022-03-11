/*
* A game to guess numbers between 1 to 100 written in C.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


// Main function
int main() {
    // Declaring variables
    int n, count=1;
    
    // Stores a random number from 1 to 100
    srand(time(0));
    int num=rand()%100;

    // game begins
    do { 
        printf("\nEnter your guess: ");
        scanf("%d", &n);

        if(n > num) {
            printf("\n× Guess a smaller number!");
        }
        else if(n < num) {
            printf("\n× Guess a greater number!");
        }
        else {
            printf("\n×•× Woah! You guessed right ×•×");
            printf("\n\n• Number: %d\n• Attempts: %d\n", num, count);
        }
        count++;
        printf("\n+-------------------+\n");
    } while(n != num);
}
