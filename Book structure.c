//program to define and use book structure
/*
Author:Raymond Wafula
Reg no: CT101/G/21897/24
Date: 23/10/2024
*/
#include <stdio.h>
#include<string.h>
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    struct book myBook;

    strcpy(myBook.title,"Introduction to C Programming");
    strcpy(myBook.author,"John Smith");
    myBook.publication_year = 2022;
    strcpy(myBook.ISBN,"9780131103627");
    myBook.price = 49.99;

    printf("Book Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    printf("\nEnter book details:\n");
    printf("Title: ");
    scanf("%s", myBook.title);
    printf("Author: ");
    scanf("%s", myBook.author);
    printf("Publication Year: ");
    scanf("%d", &myBook.publication_year);
    printf("ISBN: ");
    scanf("%s", myBook.ISBN);
    printf("Price: ");
    scanf("%f", &myBook.price);

    printf("\nUpdated Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}