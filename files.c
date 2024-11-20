//program to perform required text file operation
/*
Author: Raymond Wafula
Reg no: CT101/G/21897/24
Date:18/11/2024
*/
#include <stdio.h>
#include <string.h>

void writeToFile(const char *filename) {
    FILE *fp;
    char paragraph[201]; 

    printf("Enter a paragraph (up to 200 characters):\n");
    fgets(paragraph, 201, stdin);

    fp = fopen(filename, "w"); 
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    fputs(paragraph, fp);
    fclose(fp);
}

void readFromFile(const char *filename) {
    FILE *fp;
    char ch;

    fp = fopen(filename, "r"); 
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    printf("Contents of %s:\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
}

void appendToFile(const char *filename) {
    FILE *fp;
    char paragraph[201];

    printf("Enter an additional paragraph:\n");
    fgets(paragraph, 201, stdin);

    fp = fopen(filename, "a"); 
    if (fp == NULL) {
        perror("Error opening file");
        return;
    }

    fputs(paragraph, fp);
    fclose(fp);
}

int main() {
    writeToFile("output.txt");
    readFromFile("output.txt");
    appendToFile("output.txt");
    readFromFile("output.txt");

    return 0;
}