#include<stdio.h>

void pw(long,char[]);
char *one[]={" "," one"," two"," three"," four"," five"," six"," seven","eight"," Nine"," ten"," eleven"," twelve"," thirteen"," fourteen","fifteen"," sixteen"," seventeen"," eighteen"," nineteen"};
char *ten[]={" "," "," twenty"," thirty"," forty"," fifty"," sixty","seventy"," eighty"," ninety"};


void main() {
 long n;
 printf("\n\tEnter the number : ");
 scanf("%ld",&n);
 if(n <= 0)
    printf("\n\tEnter numbers greater than 0");
 else
 {
    pw( (n / 10000000),"crore");
    pw(( (n / 100000) % 100),"lakh");
    pw( ( (n / 1000) % 100),"thousand");
    pw( ( (n / 100) % 10),"hundred");
    pw( (n % 100)," ");
 }
return ;
}


void pw(long n,char ch[]) {
 (n>19)?printf("%s %s ",ten[n/10],one[n%10]):printf("%s ",one[n]);
 if(n)printf("%s ",ch);
}
