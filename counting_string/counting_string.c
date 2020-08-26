#include <stdio.h>

int get_input_type(char c) {
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return 1;

	return 0;
}

int main() {
	char * str = "Don't ask what your country can do for you, but ask what you can do for your country.";
	char c;

	int state = 0;	
	int input = 0;	
	int counter = 0;

	printf("Lets, count how many words in string:\n");
	printf("<%s>\n", str);

	while ((c = *str++) != '\0')	{
		input = get_input_type(c);			

		if (state == 0 && input == 1) {
			state = 1;
		}
		else if (state == 1 && input == 0) {
			counter++;
			state = 0;
		} 
	}
	
	printf("find %d words.\n", counter);
	
	return 0;
}