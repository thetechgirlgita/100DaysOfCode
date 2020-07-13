// C program to find number of integers with exactly 9 divisors

#include <stdio.h>

int count_no_of_divisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
        count = count + 1;
    }
return count;
}

void check_9_factors(int n) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        if (count_no_of_divisors(i) == 9) {
            printf("%d ", i);
            c = c + 1;
        }
    }
    printf("\n\n\tTotal = %d\n", c);
}

int main() {
    int n;
    printf("\n\tEnter the number : ");
    scanf("%d", &n);
    printf("\n\tThe number which has exactly 9 divisors : ");
    check_9_factors(n);
    return 0;
}


