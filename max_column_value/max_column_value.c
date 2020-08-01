/* C Program to find the maximum element in each column of a matrix */
#include<stdio.h>

void maxi_col(int mat[][3], int m, int n) {
	int i,j;
	printf("   Column having maximum value :\n" );
	for(i = 0; i < n; i++) {
		int max = mat[0][i];
		for(j = 1; j < m; j++) {
			if(mat[j][i] > max) {
				max = mat[j][i];
			}
		}
		printf("%d\n",max);
	}
}

int main() {
	int m, n;
	printf("   Enter the type of matrix :\n");
	scanf("%d %d",&m,&n);
	
	int i, j;
	int mat1[m][n];
	printf("   Enter the elements of matrix :\n");
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) { 
			scanf("%d",&mat1[i][j]);
		}
	}
	maxi_col(mat1,m,n);
return 0;
}