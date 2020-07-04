
#include <stdio.h>
#include <math.h>

int to_decimal( int n) {
    int dec = 0, i = 0, rem;
    while (n!=0) {
    rem = n%10;
    n /= 10;
    dec += rem * pow(2,i);
    ++i;
}
return dec;
}

int main() {
    int n;
    printf("\n\tEnter a binary number  ");
    scanf("%d", &n);
    printf("\n\tDecimal number of given %d is  : %d\n ",n, to_decimal(n));
    return 0;
}