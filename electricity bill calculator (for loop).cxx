//program to create electricity bill calculator using for loop
/*
Author: Raymond Wafula
Reg no.:CT101/G/21897/24
date:9/10/2024
*/
#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[100];
    double chargesPerUnit, totalBill, surchargeFee, totalAmountToPay;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    totalBill = 0.0;
    for (int i = 1; i <= unitsConsumed; i++) {
        if (i <= 199) {
            chargesPerUnit = 1.20;
        } else if (i <= 399) {
            chargesPerUnit = 1.50;
        } else if (i <= 599) {
            chargesPerUnit = 1.80;
        } else {
            chargesPerUnit = 2.00;
        }
        totalBill += chargesPerUnit;
    }

    if (totalBill > 400) {
        surchargeFee = totalBill * 0.15;
        totalBill += surchargeFee;
    }

    if (totalBill < 100) {
        totalBill = 100;
    }

    totalAmountToPay = totalBill;

    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: KSh. %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: KSh. %.2f\n", totalAmountToPay);

    return 0;
}