#include <stdio.h>
#include <math.h>

int to_octal(int dec);

int main() { 
    
    int dec;

    printf("\n\tEnter a decimal number: ");
    scanf("%d", &dec);

    printf("\n\tOctal number of given decimal %d is  : %d\n",dec, to_octal(dec));

return 0;
}

int to_octal(int dec) {
    int octal = 0, i = 1;

    while (dec != 0) {
    octal += (dec % 8) * i;

    dec /= 8;
    i *= 10;
}

return octal;
}