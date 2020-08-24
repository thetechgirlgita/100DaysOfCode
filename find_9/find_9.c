
#include <stdio.h>


int find(int num, int digit) {
	int counter = 0;	

	do {
		
		if (num % 10 == digit)
			counter++;

		num = num / 10;
	} while (num != 0);

	return counter;
}

int main(void){
	int begin = 1;		
	int end = 100;		
	int i = 0;
	int sum = 0;		

	
	for (i = begin; i <= end; i++) {
		sum += find(i, 9);
	}

	printf("sum = %d \n", sum);

	return 0;
}