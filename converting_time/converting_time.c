#include<stdio.h>

int main(){
	
	int inputSecond;

	
	int hours,minutes,seconds;
	int remainingSeconds;

	
	int secondsInHour = 60 * 60;
	int secondsInMinute = 60;

	//4
	printf("Enter seconds : ");
	scanf("%d",&inputSecond);

	//5
	hours = (inputSecond/secondsInHour);

	//6
	remainingSeconds = inputSecond - (hours * secondsInHour);
	minutes = remainingSeconds/secondsInMinute;

	
	remainingSeconds = remainingSeconds - (minutes*secondsInMinute);
	seconds = remainingSeconds;

	
	printf("%d hour, %d minutes and %d seconds",hours,minutes,seconds);
}