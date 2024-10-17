//program to calculate electicity bill using 1D array
/*
Author: Raymond Wafula
Reg no.: CT101/G/21897/24
Date: 17/10/2024
*/
#include <stdio.h>
int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    double chargesPerUnit[4] = {1.20, 1.50, 1.80, 2.00};
    double totalBill, surcharge, amountToPay;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", &customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    totalBill = 0;
    for (int i = 0; i < 4; i++) {
        if (unitsConsumed > 200 * (i + 1)) {
            totalBill += 200 * chargesPerUnit[i];
        } else {
            totalBill += (unitsConsumed - 200 * i) * chargesPerUnit[i];
            break;
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
    printf("Charges per Unit: %.2f\n", chargesPerUnit[0]);
    
    printf("Total Amount to Pay: Ksh. %.2f\n", amountToPay);

    return 0;
}