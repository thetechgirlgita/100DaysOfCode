#include<stdio.h>

int main() {
    
    float r, d, t, code;
    
    printf("Enter your code\n 1: for rupees to dollar\n 2: For dollar to rupee ");
    scanf("%f",&code);
    
    if(code == 1)  {
        
        printf("Enter your Nepali  amount : ");
        scanf("%f",&r);
        
        d = r / (117.25);
        printf("You have dollar %0.2f ",d);
        
    }
    
    else if (code == 2) {
        printf("Enter your dollar  amount : ");
        scanf("%f",&d);
        
        r = d * (117.25);
        printf("You have rupees %0.2f",r);
        
    }
    
    else {
        printf("Invalid code");
    }
    return 0;
}