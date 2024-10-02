//program to calculate the fine for overdue library books
/*
Author: RAYMOND WAFULA
Reg no.: CT101/G/21897/24
Date: 1/10/24
*/
//preprocessor directive
#include <stdio.h>
int main() {
    int bookID,dueDate,returnDate,daysOverdue,fineRate, fineAmount;

    printf("Enter book ID:");
    scanf("%d",&bookID);

    printf("Enter Due date:");
    scanf("%d",&dueDate);

    printf("Enter return date:");
    scanf("%d",&returndate);

    daysOverdue=returnDate-dueDate;

    calculate fineAmount
    if (daysOverdue <= 7) {
        fineRate =20;
    } else if (daysOverdue <= 14) {
        fineRate =50;
    } else {
        fineRate = 100;
    }

    fineAmount = daysOverdue*fineRate;

    printf("\nBook ID: %d\n", bookID);
    printf("Due date: %d\n", dueDate);
    printf("Return date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine rate: %d\n", fineRate);
    printf("Fine amount: %d\n", fineAmount);

    return 0;
}
