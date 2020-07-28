/* C program to check if the given matrix is upper triangular or not */

#include <stdio.h>

int main() {
	int n; 
	printf("\nEnter the matrix elements :\n");
	scanf("%d",&n);
	
	int flag = 0;
	int mat[n][n];
	int i, j;
	
	printf("\nEnter the elements of matrix:\n");
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d",&mat[i][j]);
		}
	}

	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (mat[i][j] != 0) {
				flag = 0;
			}
			else {
				flag = 1;
			}
		}
	}
  
	if (flag == 1) {
		printf("Upper Triangular Matrix");
	}
	else {
		printf("Not an Upper Triangular Matrix");
	}
return 0;
}
