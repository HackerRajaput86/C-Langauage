#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Get the size of the matrices from the user
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Input for Matrix 1
    printf("\nEnter elements of first matrix:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for Matrix 2
    printf("\nEnter elements of second matrix:\n");
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply matrices
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the result
    printf("\nResultant matrix after multiplication:\n");
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
