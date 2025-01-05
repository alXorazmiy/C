#include <stdio.h>


int multiply_matrix(int matrix_1[3][3], int matrix_2[3][3], int n, int m);


int main() {
    int matrix_1 [3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1},
    };

    int matrix_2 [3][3] = {
        {2, 2, 2},
        {2, 2, 2},
        {2, 2, 2},
    }; 

    int matrix_3 [3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j< 3; j++) {
            int result = 0;
            for (int k = 0; k < 3; k ++) {
                result += matrix_1[j][i] * matrix_2[i][j];
            }
            matrix_3[i][j] = result;
            // matrix_3[i][j] = multiply_matrix(matrix_1, matrix_2, i, j);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j< 3; j++) {
            printf("%d ", matrix_3[i][j]);
        }
        printf("\n");
    }


    return 0;
}