# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool chkAutomor(int num1) {
    
    int sqno = num1 * num1;
    
    while (num1 > 0) {
        if (num1 % 10 != sqno % 10) {
            return false;
        }
        num1 /= 10;
        sqno /= 10;
    }
    return true;
}

int main() {
    
    int num;
    printf("\n\n Check whether a number is an Authomorphic Number or not: \n");
    printf(" ------------------------------------------------------------\n");
    printf(" Input a number: ");
    scanf("%d",&num);	
 
    if( chkAutomor(num)) {
        printf(" The given number is an Automorphic Number.\n");
    }
      
    else {
        printf(" The given number is not an Authomorphic Number.\n");
    }
    return 0;
}