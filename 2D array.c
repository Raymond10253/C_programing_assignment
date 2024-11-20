//program to define and initialize a 2D array
/*
Author:Raymond Wafula
Reg no: CT101/G/21897/24
Date:18/11/2024
*/
#include <stdio.h>
int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}