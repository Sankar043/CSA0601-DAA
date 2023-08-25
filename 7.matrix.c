#include <stdio.h>

// Function to perform matrix addition
void matrix_addition(int A[2][2], int B[2][2], int C[2][2]) {
	int i,j;
    for (i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to perform matrix subtraction
void matrix_subtraction(int A[2][2], int B[2][2], int C[2][2]) {
	int i,j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to perform Strassen's matrix multiplication for 2x2 matrices
void strassen_mult(int A[2][2], int B[2][2], int C[2][2]) {
    int m1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int m2 = (A[1][0] + A[1][1]) * B[0][0];
    int m3 = A[0][0] * (B[0][1] - B[1][1]);
    int m4 = A[1][1] * (B[1][0] - B[0][0]);
    int m5 = (A[0][0] + A[0][1]) * B[1][1];
    int m6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    int m7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);

    C[0][0] = m1 + m4 - m5 + m7;
    C[0][1] = m3 + m5;
    C[1][0] = m2 + m4;
    C[1][1] = m1 - m2 + m3 + m6;
}

// Function to display a matrix
void display_matrix(int mat[2][2]) {
	int i,j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[2][2], B[2][2], C[2][2],i,j;

    printf("Enter elements of matrix A:\n");
    for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    strassen_mult(A, B, C);

    printf("Matrix A:\n");
    display_matrix(A);

    printf("Matrix B:\n");
    display_matrix(B);

    printf("Matrix C (Result of Strassen's Matrix Multiplication):\n");
    display_matrix(C);

    return 0;
}
