#include <stdio.h>

#define all_num    	100
#define count_num	3
#define out_num		3


int people[all_num];

int main() {
	int left, pos, step, i;

	int counter = 0;

	left = all_num;
	pos = 0;
	step = 0;

	
	for (i = 0; i < all_num; i++)
		people[i] = i + 1;

	
	while (left > 0) {
		
		if (people[pos] > 0)
			step++;

		if (step == out_num	 && people[pos] != 0) {
			printf("%d out \n", people[pos]);
			people[pos] = 0;
			left--;
		}
		
	#if 1
		pos = ++pos % all_num;
		step = step % count_num;
	#else	
		pos++;
		if (pos == all_num)
			pos = 0;
		
		if (step == count_num)
			step = 0;
	#endif
	}

	return 0;
}