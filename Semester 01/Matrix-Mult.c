/*
* This is a C program to multiply 2 matrices
*/

#include <stdio.h>


void main() {
  // Declaring variables
  int r, c, i, j, k;
  int a[10][10], b[10][10], mult[10][10];

  // Taking matrix rows and columns input
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);

  // Taking matrix elements
  printf("\nEnter elements of 1st matrix:\n");
  for(i = 0; i < r; ++i) {
    for(j = 0; j < c; ++j) {
      printf("Enter element A[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nEnter elements of 2nd matrix:\n");
  for(i = 0; i < r; ++i) {
    for(j = 0; j < c; ++j) {
      printf("Enter element B[%d][%d]: ", i, j);
      scanf("%d", &b[i][j]);
    }
  }
  
  // Multiplication of matrix
  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      mult[i][j] = 0;
    }
  }
  for(i = 0; i < r; ++i) {
    for (j = 0; j < c; ++j) {
      for (k = 0; k < c; ++k) {
        mult[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  // Printing multiplied matrix
  printf("\nOutput Matrix:\n");
  for(i = 0; i < r; ++i) {
    for(j = 0; j < c; ++j) {
      printf("%d  ", mult[i][j]);
      if(j == c - 1) {
        printf("\n");
      }
    }
  }
  
  getch();
}
