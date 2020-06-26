#include <stdio.h>

int main() {
char operator;
int first, second;
float result;

printf("Let me know your operator( +, _, *, /, % )");
scanf("%c\n",&operator);

printf("Enter your first integer : ");
scanf(" %d",&first);

printf("Enter your second integer :");
scanf("%d",&second);

switch(operator) {
case '+' :
result = first + second;
break;
 
case '-':
result = first - second;
break;

case '*':
result = first * second;
break;

case '/' :
result = (float)first / (float)second ;
break;

case '%' :
result = first % second;
break;

default :
printf("Invalid operator.....");
break;

}
printf("The result of %d %c %d = %f\n", first, operator, second, result);

return 0;
}






