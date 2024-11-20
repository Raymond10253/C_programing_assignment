//program to create a structure named employee
/*
Author: Raymond Wafula
Reg no: CT101/G/21897/24
Date:19/11/2024
*/
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i, highest_salary_index = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }

    for (i = 1; i < 3; i++) {
        if (emp[i].salary > emp[highest_salary_index].salary) {
            highest_salary_index = i;
        }
    }

    printf("\nHighest salary employee:\n");
    printf("ID: %d\n", emp[highest_salary_index].id);
    printf("Name: %s\n", emp[highest_salary_index].name);
    printf("Salary: %.2f\n", emp[highest_salary_index].salary);

    return 0;
}