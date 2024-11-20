//program to know whether a number is odd or even
/*
author: Raymond Wafula
date:17/11/2024
Reg no.: CT101/G/21897/24
*/
#include <stdio.h>
int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}