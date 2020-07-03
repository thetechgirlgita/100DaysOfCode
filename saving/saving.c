#include <stdio.h>

struct expenses{
    int salary, food, clothes,  entertainment, internet;
    char others[10];
    int other, total, saving;
    
} p;
int main() {
    printf ("\t Your Salary :      ");
    scanf("%d",&p.salary);
    
    printf("\n*************MONTHLY-EXPENSES****************\n");
    printf("On Food :              Rs. ");
    scanf("%d",&p.food);
    
    printf("\nOn Clothes or footwears :             Rs.  ");
    scanf("%d",&p.clothes);
    
    printf("\nOn your entertainment :      Rs. ");
    scanf("%d",&p.entertainment);
    
    printf("\nOn internet + mobile recharge :       Rs.  ");
    scanf("%d",&p.internet);
    
    printf("\nYour additional place of expenses :  " );
    scanf("%s",&p.others);
    
    printf("\nOn %s :       Rs. ", p.others);
    scanf("%d",&p.other);
    
    p.total = p.food + p.clothes + p.entertainment + p.internet + p.other;
    printf(" \nTotal expenses : Rs. %d\n ",p.total);
    
    p.saving = p.salary - p.total;
    printf("****************************************************************");
    printf(" \t\n Your total monthly saving is  :Rs. %d ", p.saving);
    printf("****************************************************************");
    return 0;
}

