/* C program – hollow diamond pattern printing using stars */

#include <stdio.h>

int main() {
	int i, j, space, k = 0, n;
	printf("\n\tEnter the number of rows : ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		while (k != (2 * i - 1))	{
			if (k == 0 || k == 2 * i - 2)
				printf("*");
			else
				printf(" ");
			k++;
		}
	k = 0;
	printf("\n");
	}
	n--;
	for (i = n; i >= 1; i--) {
		for (j = 0; j <= n - i; j++) {
			printf(" ");
		}
		k = 0;
		while (k != (2 * i - 1)) {
		    if (k == 0 || k == 2 * i - 2)
			    printf("*");
		    else
			    printf(" ");
		    k++;
	}	
	printf("\n");	
	}
}