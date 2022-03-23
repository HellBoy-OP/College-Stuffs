#include <stdio.h>

int main() {
   int i, j; // declaring variables

   for (i = 1; i <= 5; i++) {
      for (j = 1; j <= i; j++) {
         printf("%d ", i); // printing pattern
      }
      printf("\n");
   }
   
   return 0;
}
