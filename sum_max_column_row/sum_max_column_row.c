#include <stdio.h>

int main() {
	int m, n, row, col, sum = 0, row_ind = 0, col_ind = 0;
	printf("\nEnter the type of matrix:\n ");
	scanf("%d %d",&m,&n);
	
	int row_arr[m];
	int i, j;
	int mat[m][n];
	printf("Enter the elements of matrix:\n");
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d",&mat[i][j]);
		}
	}

	int z = 0;

	printf("Sum of rows is:\n");
	for(row=0; row<m; row++) {
		sum = 0;
		for(col=0; col<n; col++) {
			sum += mat[row][col];
		}
		printf("%d ",sum);
		row_arr[z++] = sum;
	}
	
	int temp_row = row_arr[0];
	for(i=1;i<m;i++) {
		if(temp_row < row_arr[i]) {
			temp_row = row_arr[i];
			row_ind = i;
		}
    }

	printf("\nRow %d has maximum sum ", row_ind + 1);

	printf("\nSum of columns is:\n ");
	sum = 0;
	int y = 0;
	int col_arr[n];
	for (i = 0; i < n; ++i) {
		sum = 0;
		for (j = 0; j < m; ++j) {
		    sum = sum + mat[j][i];
		}		
		printf("%d ",sum);
		col_arr[y++] = sum;
	}
	
	int temp_col = col_arr[0];
	for(i = 1; i < n; i++) {
		if(temp_col < col_arr[i]) {
			temp_col = col_arr[i];
			col_ind = i;
		}
	}
	
	printf("\nColumn %d has maximum sum ", col_ind + 1);
	return 0;
}