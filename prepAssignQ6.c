#include<stdio.h>

int main() {
    int row, col;
    int row2, col2;

    printf("Enter row and col for first mxn matrix: ");
    scanf("%d %d", &row, &col);

    int matrix[row][col];
    printf("Enter values of matrix: ");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter row and col for second mxn matrix: ");
    scanf("%d %d", &row2, &col2);
    
    int matrix2[row2][col2];
    printf("Enter values of matrix: ");
    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("matrix1: \n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("matrix2: \n");
    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    if(col != row2) {
        printf("for multiplication number of column of first matrix must match the nmber of rows of secon matrix");
    } else {
        int product[row][col2];

        for(int i=0; i<row; i++) {
            for(int j=0; j<col2; j++) {
                product[i][j] = 0;
            }
        }

        for(int i=0; i<row; i++) {
            for(int j=0; j<col2; j++) {
                for(int k=0; k<col; k++) {
                    product[i][j] += matrix[i][k] * matrix2[k][j];
                }
            }
        }

        printf("Product: \n");
        for(int i=0; i<row; i++) {
            for(int j=0; j<col2; j++) {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }
} 