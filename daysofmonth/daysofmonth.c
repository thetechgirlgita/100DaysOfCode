

#include<stdio.h>
int main() {
   
    int year, month;
    printf("\n\tEnter the year : ");
    scanf("%d",&year);
    printf("\n\tEnter the month  of %d year in digit : ",year);
    scanf("%d",&month);
    
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("\n\tNumber of days is 31");
    }
    else if((month == 2) && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))) 	 {
        printf("\n\tNumber of days is 29");
    }
    else if(month == 2) {
        printf("\n\tNumber of days is 28");
    }	
    else {
        printf("\n\tNumber of days is 30");
    }
    return 0;
}