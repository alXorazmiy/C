#include <stdio.h>


int multiply_matrix(int matrix_1[3][3], int matrix_2[3][3], int n, int m);


int main() {
    int n, m;
    printf("matrix qator va ustunlar sonini kiriting: ");
    scanf("%d %d", &n, &m);


    int matrix_1 [n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< m; j ++) {
            scanf("%d", &matrix_1[i][j]);
        }
    }
    int matrix_2 [m][n]; 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j< n; j ++) {
            scanf("%d", &matrix_2[i][j]);
        }
    }

    int matrix_3 [n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< n; j++) {
            int result = 0;
            for (int k = 0; k < m; k ++) {
                result += matrix_1[i][k] * matrix_2[k][j];
            }
            matrix_3[i][j] = result;
            // matrix_3[i][j] = multiply_matrix(matrix_1, matrix_2, i, j);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j< n; j++) {
            printf("%d ", matrix_3[i][j]);
        }
        printf("\n");
    }


    return 0;
}