#include<stdio.h>

int main() {
	char str[1000], ch;
	int count = 0;

	printf("Write your paragraph : ");
	fgets(str, sizeof(str), stdin);

	printf("Press your desire letter to 		find its total number : ");
	scanf("%c",&ch);

	for (int i = 0; str[i] != '\0'; ++i) {
	     if(ch ==str[i])	
	     count++;
	}

	printf("The total number of %c is : 		%d",ch,count);
	return 0;
}