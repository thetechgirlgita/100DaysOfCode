#include<stdio.h>

int power(int n1, int n2);

int main() {
   
    printf("Enter base number: ");
    scanf("%d", &base);

    printf("\n\nEnter Power factor: ");
    scanf("%d", &exp);

    printf("\n\n\n\t\t\t%d^%d = %d", base, exp, power(base, exp));
    
    return 0;
}

int power(int b, int e) {
    if(e == 0)
        return 1;

    return (b*power(b, e-1));
}