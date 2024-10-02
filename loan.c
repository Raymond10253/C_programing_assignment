//program to calculate loan 
/*
Author: RAYMOND WAFULA
Reg no.: CT101/G/21897/24
Date: 23/9/24
*/
//preprocessor directive
#include <stdio.h>

int main(){
    int age,income;

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your annual income: ");
    scanf("%d", &income);

    if (age >= 21 &&income >=21000) {
        printf("Congradulations! you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;

}
