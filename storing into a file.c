//program to read name and marks of 5 students and store
/*
Author: Raymond wafula
Reg no.:CT101/G/21897/24
Date:30/10/2024
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char name[50];
    int marks, i;

    fptr = fopen("students.txt","w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);

        fprintf(fptr, "%s %d\n", name, marks);
    }

    fclose(fptr);
    printf("Student information written to file successfully.\n");

    return 0;
}