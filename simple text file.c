//program to manage simple text file
/*
Author: Raymond Wafula
Reg no.: CT101/G/21897/24
Date: 29/10/2024
*/
#include <stdio.h>
#include <string.h>

void write_to_file() {
    FILE *fptr;
    char sentence[100];

    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, 100, stdin);

    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("Sentence written to file successfully.\n");
}

void read_from_file() {
    FILE *fptr;
    char sentence[100];

    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fgets(sentence, 100, fptr);
    printf("Content of the file:\n%s", sentence);
    fclose(fptr);
}

void append_to_file() {
    FILE *fptr;
    char sentence[100];

    printf("Enter a sentence to append: ");
    fgets(sentence, 100, stdin);

    fptr = fopen("data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("Sentence appended to file successfully.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Write a sentence to the file\n");
        printf("2. Read the content of the file\n");
        printf("3. Append a sentence to the file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                write_to_file();
                break;
            case 2:
                read_from_file();
                break;
            case 3:
                append_to_file();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}