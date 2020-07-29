/* C Program to find the maximum element in each row of a matrix */
#include<stdio.h>

void display(int result[], int n) {
    int i;
    printf("\nThe maximum value having element on each rows are : ");
    for(i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
}

void maxi_row(int mat[][3], int m, int n) {
    int i = 0, j;
    int max = 0;
    int result[m];
    while (i < m) {
        for ( j = 0; j < n; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
        result[i] = max;
        max = 0;
        i++;
    }
    display(result, m);
}


int main() {
    int m, n;
    printf("\nEnter the type of matrix : ");
    scanf("%d %d",&m,&n);
    int i, j;
    int mat1[m][n];
    printf("\nEnter the components of matrix :\n ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d",&mat1[i][j]);
        }
    }

    maxi_row(mat1,m,n);
return 0;
}