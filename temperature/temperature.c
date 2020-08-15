#include <stdio.h>

int main() {
    char ch;
    float celsius, fahrenheit;
    
    printf("\n\tHello dear users!\n\t Would you want to continue the program?(y/n) ");
    scanf("%c",&ch);
    
    if(ch == 'N' || ch == 'n'){
    printf("\t**************Thankyou!!!!**************");
    }
    
    else if(ch == 'y' || ch == 'Y') {
         
    printf("\n\tEnter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("\n\t%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    }
    else {
        printf("\n\tInvalid option.");
    }
    return 0;
}