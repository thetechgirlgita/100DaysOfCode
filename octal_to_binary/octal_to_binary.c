#include <stdio.h>
#include <math.h>

long  long oct_to_bin(int oct) {
    int dec = 0, i = 0;
    long long bin = 0;

    while(oct != 0) {
    dec += (oct % 10) * pow(8,i);
    ++i;
    oct /= 10;
    }

    i = 1;

    while (dec != 0) {
    bin += (dec % 2) * i;
    dec /= 2;
    i *= 10;
    }

    return bin;
}


int main() {
    int oct;

    printf("\n\tEnter an octal number: ");
    scanf("%d", &oct);

    printf("\n\tBinary number of octal (%d) is  : %lld\n",oct, oct_to_bin(oct));

    return 0;
}

