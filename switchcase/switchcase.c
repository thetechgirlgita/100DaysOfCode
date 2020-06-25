#include <stdio.h>

int main() {
    int day;
    printf("Enter the number of the day : ");
    scanf("%d",&day);
    switch(day) {
        case 1:
        printf("It's a Monday\n Open : 10am \n Close : 6pm\n");
        break ;
        
        case 2:
        printf("It's a Tuesday\n Open : 10am\n  Close : 6pm\n   Meeting : 2pm to 3pm\n");
        break;
        
        case 3:
        printf("It's a Wednesday\n Open : 10am \n Close : 4pm\n ");
        break;
        
        case 4:
        printf("It's a Thursday\n Open : 10am \n Close : 5pm \n Meeting : 12pm to 2pm\n");
        break;
        
        case 5:
        printf("It's a Friday\n Open : 10am \n Close: 3pm\n");
        break;
        
        case 6:
        printf("It's a Saturday\n Holiday!!!!!!");
        break;
        
        case 7:
        printf("It's a Sunday\n Holiday !!!!!!");
        break;
         
        default :
        printf("Sorry!!! \n Please enter the number 1 to 7\n");
        
        
    }
    return 0;
}