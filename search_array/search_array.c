// C program to search an element in an array

#include <stdio.h>
  
int main () {
  
int array[100], ele, c, n;
  
printf ("\n\tEnter the number of elements of the array : ");
scanf ("%d", &n);
  
printf ("\n\tInput the array elements : ");
for (c = 0; c < n; c++)
scanf ("%d", &array[c]);

printf ("\n\tEnter element : ");
scanf ("%d", &ele);
for (c = 0; c < n; c++) {
    if (array[c] == ele) {
        printf ("\n\tElement found\n");
    }
    
}
return 0;
}
