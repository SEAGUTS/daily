#include <stdio.h>

void multiplyMatrices(int A[3][3], int B[3][3], int C[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      C[i][j] = 0; // Initialize product element to 0
      for (int k = 0; k < 3; k++) {
        C[i][j] += A[i][k] * B[k][j]; // Element-wise multiplication and summation
      }
    }
  }
}

void printMatrix(int matrix[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  printf("Enter elements of Matrix 1 (row-wise):\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter elements of Matrix 2 (row-wise):\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  // Multiply matrices
  multiplyMatrices(A, B, C);

  // Print the product matrix
  printf("Resultant Product Matrix:\n");
  printMatrix(C);

  return 0;
}
