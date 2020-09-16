#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
float calculate_emi(float principal, float rate, float time);

int main() {
    
    float principal, rate, time, emi;
    
    printf("Enter the value of principal\n");
    scanf("%f",&principal);
    
    printf("Enter the value of time\n");
    scanf("%f",&time);
    
    printf("Enter the value of rate\n");
    scanf("%f",&rate);
    
    emi = calculate_emi(principal, rate, time);
    printf("You have to pay %f Monthly EMI!!\n", emi);
 
    return 0;
}

float calculate_emi(float principal, float rate, float time) {
    
    float emi;
    
    rate = rate / (12 * 100); 
    time = time * 12;    
    emi = (principal * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1); 
    
    return emi;
}