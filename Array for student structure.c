//creating an array structure for student information
/*
Author: Raymond Wafula
Reg no.: CT101/G/21897/24
Date: 29/10/2024
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *fptr;
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    fptr = fopen("students.bin", "wb");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fwrite(students, sizeof(struct Student), 5, fptr);
    fclose(fptr);

    fptr = fopen("students.bin", "rb");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fread(students, sizeof(struct Student), 5, fptr);
    fclose(fptr);

    printf("\nStudent Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d\n", students[i].marks);
    }

    return 0;
}