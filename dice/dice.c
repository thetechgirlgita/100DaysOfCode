#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int runTime;
    int dice1;
    int dice2;
    int dice3;
    int temp;
    int total;
    char guess;
    int count = 0;
    
    srand(time(NULL));

    printf("How many times do you want to play?\n");
    scanf("%d\n", &runTime);
    

    dice1 = ( (rand() % 6) + 1);
    dice2 = ( (rand() % 6) + 1);
    dice3 = ( (rand() % 6) + 1);
    total = (dice1 + dice2 + dice3);

    if(runTime != 0){

        printf("Dice 1: %d\n", dice1);
        printf("Dice 2: %d\n", dice2);
        printf("Dice 3: %d\n", dice3);
        printf("-------------------\n");
        printf("Total: %d\n\n", total);
        
        temp = total;

        printf("Do you think the next total what will than the previous total? (h, s, l) \n");
        scanf("%c", &guess);

        for(i = 0; i < runTime - 1; i++){
            dice1 = ( (rand() % 6) + 1);
            dice2 = ( (rand() % 6) + 1);
            dice3 = ( (rand() % 6) + 1);
            total = (dice1 + dice2 + dice3);

            printf("Die 1: %d\n", dice1);
            printf("Die 2: %d\n", dice2);
            printf("Die 3: %d\n", dice3);
            printf("-------------------");
            printf("Total: %d\n", total);

            if( (total > temp) && (guess == 'h') ){
                printf("You guessed correctly!\n");
                count++;
            }
            else if( (total == temp) && (guess == 's') ){
                printf("You guessed correctly!\n");
                count++;
            }
            else if( (total < temp) && (guess == 'l') ){
                printf("You guessed correctly!\n");
                count++;
            }
            else{
                printf("You guessed incorrectly :(\n");
            }
            
            temp = total;
            printf("Do you think the next total will be higher, the same, or lower than the previous total? (h, s, l) \n");
            scanf(" %c", &guess);

        }
        printf("You got a total of %d guesses correct!", count);
    }
    else{
        printf("Goodbye.");
    }
    return 0;
}
    