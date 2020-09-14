#include <stdio.h>
#include <string.h>  

void main() {  
    
   int id, unit;
   float chg, surchg=0, gramt,netamt;
   char name[25];

   printf("Input Customer ID :");
   scanf("%d",&id);
   
   printf("Input the name of the customer :");
   scanf("%s",name);
   
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   
    if (unit <200 ) {
        chg = 1.20;
    }
    else if (unit>=200 && unit<400){
	    chg = 1.50;
    }
	else if (unit>=400 && unit<600){
		chg = 1.80;
	}
	else {
		chg = 2.00;
	}
    gramt = unit * chg;
   
    if (gramt > 300) {
        surchg = gramt * 15 / 100.0;
        netamt = gramt + surchg;
    }
   
    if (netamt  < 100)
	    netamt = 100;
        printf("\nElectricity Bill\n");
        printf("Customer IDNO                       :%d\n",id);
        printf("Customer Name                       :%s\n",name);
        printf("unit Consumed                       :%d\n",unit);
        printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
        printf("Surchage Amount                     :%8.2f\n",surchg);
        printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);

    }  