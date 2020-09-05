#include <stdio.h>

static int addDigits(int num) {
    return num - (num - 1) / 9 * 9;
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("\nInitial number is %d, Single digit number is %d.", n, addDigits(n));
   
    return 0;
}