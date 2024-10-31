//program to enter data in an existing file if not create a new file
/*
Author: Raymond Wafula
Reg no.:CT101/G/218924
Date: 30/10/24
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char name[50];
    int marks;

    fptr = fopen("/storage/emulated/0/storing into a file.c", "a");

    if (fptr == NULL) {
        fptr = fopen("students.txt", "w");
        if (fptr == NULL) {
            printf("Error creating file!\n");
            exit(1);
        }
    }

    printf("Enter student information (enter 'q' to quit):\n");

    while (1) {
        printf("Enter name: ");
        scanf("%s", name);

        if (strcmp(name, "q") == 0) {
            break; 
        }

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fptr, "%s %d\n", name, marks);
    }

    fclose(fptr);
    printf("Student information written/appended to file successfully.\n");

    return 0;
}