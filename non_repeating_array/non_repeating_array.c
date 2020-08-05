#include <stdio.h>
#include <stdlib.h>

    int non_repeating_elements(int arr[], int n) {
    int i,j;
    int count = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j] && i != j)
                break;
        }
        if(j == n ) {
            printf("\n\tNon-repeating element [%d] : %d \n",count,arr[i]);
            ++count;
        }
    }
    return -1;
}

    int main() {
    int n,i;
    printf("\n\tEnter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("\n\tInput the array elements : ");
    for(i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    non_repeating_elements(arr, n);
    return 0;
}