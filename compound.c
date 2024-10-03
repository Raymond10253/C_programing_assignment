//program to calculate compound interest
/*
Author : Raymond Wafula
Reg no. : CT101/G/21897/24
Date: 30/9/24
*/
//preprocessor directive

#include <stdio.h>
#include <math.h>

int main() {
  float principal,rate,time,compoundInterest,amount;
  int n;

  printf("Enter the prinmcipal amount:");
  scznf("%f",&principal);

  printf("Enter the rate:");
  scznf("%f",&rate);
  rate=rate/100;

  printf("Enter time in years:");
  scznf("%f",&time);

  printf("Enter the number of times interest is compounded yearly");
  scznf("%d",&n);

  amount=principal*pow((1+rate/n),n*time);
  compoundInterest=amount-principal;

  printf("Compound interet=%.2f\n",compoundInterest);
  printf("Amount=%.2f\n",amount);

  return 0;
    
}
