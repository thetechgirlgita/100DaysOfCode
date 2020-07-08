#include <stdio.h>

int main() {
	int	number,count,i;
	char hex[32];	

	printf("\n\tEnter decimal number: ");
	scanf("%d",&number);
	count=0;				
	while(number > 0)	{
	    
		switch(number%16) {
			case 10:
				hex[count]='A';
				break;
				
			case 11:
				hex[count]='B';
				break;
				
			case 12:
				hex[count]='C';
				break;
				
			case 13:
				hex[count]='D';
				break;
				
			case 14:
				hex[count]='E';
				break;
				
			case 15:
				hex[count]='F'; 
				break;
				
			default:
				hex[count]=(number % 16)+0x30;	
		}
		number=number / 16;
		count++;
	}

	printf("\tHexadecimal value is: ");
	for(i=(count-1); i>=0;i--)
		printf("%c",hex[i]);

	return 0;
}
    