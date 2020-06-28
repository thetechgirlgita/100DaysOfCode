#include <stdio.h>

int main() {
    int i;
    printf("Enter any integer\n : ");
    scanf("%d",&i);

    if( i > 0) {
       printf("Given integer %d is positive\n",i);
    }
    else if( i < 0) {
       printf("Given interger %d is negetive\n",i);
    }
    else if( i == 0) {
       printf("0 is non positive and non negative integer\n);
    }
    else {
       printf("Invalid input \n Please press an integer\n);
    }

 return 0;
}
    
                       
    
