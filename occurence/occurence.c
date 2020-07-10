#include <stdio.h>
 
int occurrence(int num,int d) {
    int rem, count;
    count = 0;
    while(num > 0) {
        rem = num % 10;
        if(rem == d)
            count++;
        num /= 10;
    }    
    return count;
}
  
int main() {
    int num, d, count;
  
    printf("\n\tEnter a number: ");
    scanf("%d",&num);
    printf("\n\tEnter digit to search: ");
    scanf("%d",&d);
  
    count = occurrence(num,d);
     
    printf("\n\tTotal occurrence of digit is: \n\t%d in number:\n\t %d.",count,num);
      
    return 0;
}