/* C Program to Find the Frequency of Characters in a String */

#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i;
	int freq[256] = {0};
	printf("\n\tEnter the string : ");
	scanf("%s",&str);
	
	for(i = 0; str[i] != '\0'; i++) {
		freq[str[i]]++;
	}
	
	for(i = 0; i < 256; i++) {
		if(freq[i] != 0) {
			printf("\n\t%c  = %d\n", i, freq[i]);
		}
	}
	return 0;
}