#include <stdio.h>
#include <math.h>
    
  int calcAngle(int hour, int min)  { 
    if (hour == 12){ 
        hour = 0; 
    }
    
    if (min == 60) { 
        min = 0; 
    }
    
    int hour_angle = (int)(0.5 * (hour * 60 + min)); 
    int minute_angle = (int)(6 * min);   

    int angle = abs(hour_angle - minute_angle); 
    int ang = 360 - angle;     
    return (ang > angle) ? angle : ang;
    }     
  
  int main(void) {
      
       int hour;
       printf("Enter the hour : ");
       scanf("%d",&hour);
       
       int min;
       printf("\nEnter the minutes :\n ");
       scanf("%d",&min);
      
	   if (hour <0 || min < 0 || hour > 12 || min > 60)  {
	      printf("\nWrong input..!"); 
	   }
	   
	   else {
		  printf("\nAngle between hour and minute hands %d degree",calcAngle(hour, min)); 	  
	   }
    }