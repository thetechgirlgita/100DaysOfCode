#include <stdio.h> 

int main(){

char answer;

printf("\nWould you like to play? Enter Y or N: \n");
scanf(" %c", &answer);

printf("\n answer is %c\n", answer);
while (answer == 'Y'){

printf("Success!");

printf("\nDo you want to play again? Y or N: \n");

scanf(" %c", &answer);
printf("\n answer is %c\n", answer);

}
printf("GoodBye!");
return 0;

}
