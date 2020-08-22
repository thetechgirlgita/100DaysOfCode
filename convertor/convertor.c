#include <stdio.h>

int main() {
    
    float cm, meter, km;
    int hour, min, sec;
    int choice;
    
    printf("Which unit you want to convert(length(1) / time(2) )? : ");
    scanf("%d",&choice);
    
    if(choice == 1){
    
        printf("Enter length in centimeter: ");
        scanf("%f", &cm);

        meter = cm / 100.0;
        km    = cm / 100000.0;

        printf("Length in Meter = %.2f m \n", meter);
        printf("Length in Kilometer = %.4f km", km);
    }
    
    else if(choice == 2){
        printf("Enter hour : ");
        scanf("%d",&hour);
        
        min = hour * 60;
        sec = hour * 3600;
        
        printf(" %d Hour in minutes is : %d min\n", hour, min);
        printf(" %d Hour in sec : %d sec",hour, sec);
        
    }
    else {
        printf("Thankyou!!!");
    }

    return 0;
}
