#include<stdio.h>

void Fibo(int );

int main() {
    int k, n;
    long int i = 0, j = 1;
    printf("\n  Enter the length of the Fibonacci series: ");
    scanf("%d", &n);
    
    printf("\n\n  first %d terms of Fibonacci series are:\n\n\n",n);
    Fibo(n);
    return 0;
}

void Fibo(int aj) {
    static long int first = 0, second = 1, sum;
    if(aj > 1) {
        sum = first + second;
        first = second;
        second = sum;
        printf("%ld ", sum);
        Fibo(aj-1);    // recursive call
    }
    else {
        
        printf("\n\n\n");
    }
}