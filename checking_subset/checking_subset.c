#include <stdio.h>

int SubsetArray(int *arr1 , int arr1_size, int *arr2, int arr2_size)  {
    
    int i, j;
    for (i = 0; i < arr2_size; i++)  {
        for (j = 0; j < arr1_size; j++)  {
           if(arr2[i] == arr1[j]){
              break;
           }
        }
        if(j == arr1_size) {
           return 0;
        }
    }
    return 1;
}

int main()  {
    int arr1[] = {4, 8, 7, 11, 6, 9, 5, 0, 2};
    int arr2[] = {5, 4, 2, 0, 6};
    
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int i;
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
	
	printf("The given first array is :  ");
	for(i = 0; i < n1; i++) {
	printf("%d  ", arr1[i]);
    } 
	printf("\n");
	
	printf("The given second array is :  ");
	for(i = 0; i < n2; i++) {
	printf("%d  ", arr2[i]);
    } 
	printf("\n");	
	
    if(SubsetArray(arr1, 9, arr2, 4))
      printf("The second array is the subset of first array.");
    else
      printf("The second array is not a subset of first array");     
  
    return 0;
}