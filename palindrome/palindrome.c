#include <stdio.h>

int main() {

int n, originalN, reverseN = 0, remainder;

printf("Let me know the integer that you want to check for palindrome number");
scanf("%d",&n);

originalN = n;

while(n! = 0) {
remainder = n % 10;
reverseN = reverseN * 10 + remainder;
n /= 10;
}

if(originalN == reverseN) {
	printf("Your integer %d is a palindrome ", originalN);
}
else {
	printf("Your integer %d is a not palindrome", originalN);
}
return 0;
}