
#include <stdio.h>
float myradius;          /* radius of the sphere */
float myvolume;          /* volume of the sphere (to be computed) */
char line_text[50];      /* a line from the keyboard */

/* the value of pi to 50 places, from wikipedia */
const float PI = 3.14159265358979323846264338327950288419716939937510;

int main() {
	printf("Input the radius of the sphere : ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f", &myradius);

	myvolume = (4.0 / 3.0) * PI * (myradius * myradius * myradius);  /* volumn=(4/3) * pi * r^3*/
	printf("The volume of sphere is %f.\n", myvolume);

	return(0);
}