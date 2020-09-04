#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int integer_break(int n) {
    if (n == 2) {
        return 1;
    } 
    
    else if (n == 3) {
        return 2;
    } 
    
    else if (n % 3 == 0) {
        return (int) pow(3, n / 3);
    }
    
    else if (n % 3 == 1) {
        return 2 * 2 * (int) pow(3, (n - 4) / 3);
    }
    
    else {
        return 2 * (int) pow(3, n / 3);
    }
    
}


int main() {
    
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    
    printf("\n Maximum product of %d after breaking the integer %d ", n, integer_break(n));
        	
	return 0;
}