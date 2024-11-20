//program to define and initialize a 3D array
/*
Author:Raymind Wafula
Reg no:CT101/G/21897/24
Date:18/11/2024
*/
#include <stdio.h>
int main() {
    int scores[3][2] = {
        {33, 52},
        {10, 12},
        {45, 98},
        {35, 60},
        {84, 76},
        {80, 42}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}