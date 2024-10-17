//program to calculate electricity bill using 3D array
/*
Author: Raymond Wafula
Reg no.: CT101/G/21897/24
Date: 17/10/2024
*/
#include <stdio.h>
int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    double chargesPerUnit[4][2][2] = {{{0, 1.20}, {199, 1.20}}, {{200, 1.50}, {399, 1.50}}, {{400, 1.80}, {599, 1.80}}, {{600, 2.00}, {10000, 2.00}}};
    double totalBill, surcharge, amountToPay;

    printf("Enter Customer ID:");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", &customerName);

    printf("Enter Units Consumed:");
    scanf("%d", &unitsConsumed);

    totalBill = 0;
    for (int i = 0; i < 4; i++) {
        if (unitsConsumed >= chargesPerUnit[i][0][0] && unitsConsumed <= chargesPerUnit[i][1][0]) {
            totalBill += (unitsConsumed - chargesPerUnit[i][0][0]) * chargesPerUnit[i][0][1];
            break;
        } else if (unitsConsumed > chargesPerUnit[i][1][0]) {
            totalBill += (chargesPerUnit[i][1][0] - chargesPerUnit[i][0][0]) * chargesPerUnit[i][0][1];
        }
    }

    surcharge = (totalBill > 400) ? totalBill * 0.15 : 0;

    amountToPay = totalBill + surcharge;
    if (amountToPay < 100) {
        amountToPay = 100;
    }

    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargesPerUnit[0][0][1]); 
    
    printf("Total Amount to Pay: Ksh. %.2f\n", amountToPay);

    return 0;
}