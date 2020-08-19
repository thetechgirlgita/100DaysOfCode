#include<stdio.h>
 
int main() {
    
 	int i, j, rows, columns, a[10][10], Flag = 1;
  
 	printf("\n Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++) {
   		for(columns = 0; columns < j; columns++) {
      		scanf("%d", &a[rows][columns]);
    	}
  	}
     
 	for(rows = 0; rows < i; rows++) {
   		for(columns = 0; columns < j; columns++) {
    		if(a[rows][columns] != 1 && a[columns][rows] != 0) {
    			Flag = 0;
    			break;
			}
   	 	}
  	}
  	if(Flag == 1) {
  		printf("\n The Matrix that you entered is an Identity Matrix ");
	}
	else {
		printf("\n The Matrix that you entered is Not an Identity Matrix ");
	}
  	
 	return 0;
}