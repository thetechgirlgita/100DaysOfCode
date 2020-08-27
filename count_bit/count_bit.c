#include <stdio.h>

int count_bit_1(int n) {
	int counter;	
	
	for (counter = 0; n; counter++) {
		n &= n-1;
	}
	return counter;
}

int main(int argc, char *argv[]) {
	int num;
	
	printf("Please input a number:");
	scanf("%d", &num);
	printf("Number in hex is %x\n", num);
	
	printf("%d bit '1' in %d\n", count_bit_1(num), num);
	
	return 0;
}