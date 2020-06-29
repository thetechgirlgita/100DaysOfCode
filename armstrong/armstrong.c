#include <stdio.h>

int main (){ 
    int n,originalN, remainder, result= 0;
    printf("Let me know your desire integer to check armstrong number");
    scanf("%d",&n);
    originalN= n;
    while(originalN != 0) {
         remainder = originalN % 10;
         result =  result +(remainder * remainder * remainder);
         originalN /= 10;
    }
    if(result == n) {
        printf("Your integer is an armstrong\n");
    }
    else {
        printf("Your given integer is not n armstrong\n"); 
    }
     return 0;
}