/* C program to delete an element in an array */

#include <stdio.h>

int main(){
    int array[100], position, c, n;

    printf("\n\tEnter the number of elements of the array : ");
    scanf("%d", &n);

    printf("\n\tInput the array elements : ");

    for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
    }

    printf("\n\tEnter the position : ");
    scanf("%d", &position);

    if (position >= n + 1) {
    printf("\n\tDeletion not possible.\n");
    }
    else {
    for (c = position - 1; c < n - 1; c++)
    array[c] = array[c + 1];

    printf("\n\tArray after deletion : ");
    
    for (c = 0; c < n - 1; c++)
    printf("\n\t%d", array[c]);
    }

return 0;
}