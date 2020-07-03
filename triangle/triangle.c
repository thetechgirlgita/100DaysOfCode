#include <stdio.h>

int main() {
    int i, j;
    char name[20];
    printf("Enter your name : ");
    scanf("%[^\n]",&name);
    for(i = 0; name[i] != 0 ; i++ ) {
        for(j = 0; j <= i; j++) {
            printf("%c\n ",name[j]);
        }
    printf(" \n");
    }
    return 0;
}
