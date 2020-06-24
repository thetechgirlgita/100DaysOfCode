#include <stdio.h>

int main() {
    int i, j;
    printf("Let me know, which interger's multiplication table you want ? ");
    scanf("%d",&i);
    printf("\n The multiplication table of %d is:\n",i);
    for(j = 1; j <= 10; j++) {
        printf("\t %d * %d = %d\n", i, j, i*j);
    }
    return 0;
}