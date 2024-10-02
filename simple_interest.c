//program to calculate simple interest
/*
Author: RAYMOND WAFULA
Reg no.: CT101/G/21897/24
Date: 23/9/24
*/
//preprocessor directive
#include <stdio.h>
#include <math.h>
int main(){
    float principal,time,rate,simpleInterest,amount;
    int n;

    printf("Enter principal amount:");
    scanf("%f",&principal);

    printf("Enter time:");
    scanf("%f",&time);

    printf("Enter rate:");
    scanf("%f"&rate);
    
    simpleInterest=(principal*time*rate)/100;

    printf("simpleInterest=%.2f\n",simpleInterest);

    return 0;

}