//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }
    int matrix[rows][cols];
    int row_sum[rows];
    for (int i = 0; i < rows; i++) {
        row_sum[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        printf("%d", row_sum[i]);
        if (i < rows - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
