#include <stdio.h>

int main() {
    int m, n, p, q, c, d, k, sum = 0;
    int mat1[10][10], mat2[10][10], mat3[10][10];

    printf("\n\tEnter number of rows and columns of mat1 matrix: ");
    scanf("%d%d", &m, &n);
    printf("\n\tEnter elements of matrix 1 : ");

    for (c = 0; c < m; c++) {
        for (d = 0; d < n; d++) {
            scanf("%d", &mat1[c][d]);
        }
    }

    printf("\n\tEnter number of rows and columns of mat2 matrix : ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("\n\tThe matrices can’t be multiplied with each other. ");
    }
    else {
        printf("\n\tEnter elements of matrix2 ");

        for (c = 0; c < p; c++) {
            for (d = 0; d < q; d++) {
                scanf("%d", &mat2[c][d]);
            }
        }
    }

    for (c = 0; c < m; c++) {
        for (d = 0; d < q; d++) {
            for (k = 0; k < p; k++) {
                sum = sum + mat1[c][k]*mat2[k][d];
            }

        mat3[c][d] = sum;
        sum = 0;
        }
    }

    printf("\n\tProduct of the matrices:\n ");

    for (c = 0; c < m; c++) {
        for (d = 0; d < q; d++) {
            printf("%d\t", mat3[c][d]);

            printf("\n");
        }
    }

return 0;
}