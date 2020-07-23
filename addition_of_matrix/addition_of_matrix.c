/* C Program to perform matrix operations ,matrix addition, matrix subtraction, matrix multiplication – addition */
#include <stdio.h>

int main() {
    int m , n;
    printf("\n\tEnter number of rows and columns of mat1 matrix: ");
    scanf("%d %d", &m, &n);
    printf("\n\tEnter the elements of matrix 1 : ");
    int i, j;
    int mat1[m][n], mat2[m][n], mat3[m][n];
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("\n\tEnter the elements of matrix 2 :");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            scanf("%d",&mat2[i][j]);
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++)
        printf("\n\tResult : %d ", mat3[i][j]);
        printf("\t\n");
}

return 0;
}