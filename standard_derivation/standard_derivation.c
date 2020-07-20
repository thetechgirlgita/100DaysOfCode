/*
 * C program to input real numbers and find the mean, variance
 * and standard deviation
 */
#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
 
void main() {
    float x[MAXSIZE];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
 
    printf("\n\tEnter the value of N : ");
    scanf("%d", &n);
    printf("\n\tEnter %d real numbers : ", n);
    for (i = 0; i < n; i++){
        scanf("%f", &x[i]);
    }
    for (i = 0; i < n; i++){
        sum = sum + x[i];
    }
    average = sum / (float)n;
    for (i = 0; i < n; i++){
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
    printf("\n\tAverage of all elements = %.2f\n", average);
    printf("\n\tvariance of all elements = %.2f\n", variance);
    printf("\n\tStandard deviation = %.2f\n", std_deviation);
}