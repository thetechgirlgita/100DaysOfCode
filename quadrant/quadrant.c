// C program to find the quadrant in which the given coordinates lie

#include <stdio.h>
int main() {
	int a,b;
	printf("\n\tEnter the  components of coordinates( x) : ");
	scanf("%d",&a);
	printf("\n\tEnter the  components of coordinates( y) : ");
	scanf("%d",&b);
	if(a > 0 && b > 0)
		printf("\n\tIst Quadrant");
		
	else if(a < 0 && b > 0) {
		printf("\n\tIInd Quadrant");
	}
		
	else if(a < 0 && b < 0) {
		printf("\n\tIIIrd Quadrant");
	}
		
	else if(a > 0 && b < 0) {
		printf("\n\tIVth Quadrant");
	}
		
	else if(a == 0 && b == 0) {
		printf("\n\tOrigin");
	}
	else {
	    printf("\n\tInvalid input");
	}
	return 0;
}