#include <stdio.h>

int main() {

    int n, i, *ptr, sum = 0;

    printf("\n\nEnter number of elements: ");
    scanf("%d", &n);

    ptr = (int *) malloc(n*sizeof(int));

    if(ptr == NULL)  {
        printf("\n\nError! Memory not allocated\n");
        return 0;   
    }

    printf("\n\nEnter elements of array: \n\n");
    for(i = 0; i < n; i++) {
        scanf("%d", ptr+i);    
        sum = sum + *(ptr + i);
    }

    printf("\n\nThe elements of the array are: ");
    for(i = 0; i < n; i++) {
        printf("%d  ",ptr[i]);   
    }

    free(ptr);

    return 0;
}