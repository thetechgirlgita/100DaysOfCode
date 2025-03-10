#include<stdio.h>
long int Fibo(int,long int[]);

int main() {
    int k, n;
    // for 100th fibonacci number.
    // change this to other value
    int max =100;
    long int memo[max];
    long int i = 0, j = 1;
    for(i=0;i<max;i++){
      memo[i]=0;
    }
    printf("\n  Enter the length of the Fibonacci series: ");
    scanf("%d", &n);

    printf("\n\n  first %d terms of Fibonacci series are:\n\n\n",n);
    Fibo(n,memo);
    for(i=0;i<n;i++){
      printf("%ld \n",memo[i]);
    }
    return 0;
}

long int Fibo(int aj,long int memo[]) {
    if(aj==0){
      memo[aj]=0;
      return aj;
    }
    if(aj==1){
      memo[aj]=1;
      return aj;
    }
    if(memo[aj]!=0){
      return memo[aj];
    }else{
      memo[aj]=Fibo(aj-1,memo)+Fibo(aj-2,memo);
      return memo[aj];
    }
}
