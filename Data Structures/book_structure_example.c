/*************************************
 * Author: Miguel Osuna
 * Purpose: Book Structure Example (With Function)
 * Date: 19/2/19
*************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *bookName;
    char *author;
    int pageNumber;
    float price;
} book;

book fillBookData(void);

int main()
{
    book herBook = {" ", " ", 0, 0};
    herBook = fillBookData();
    printf("%s", herBook.bookName);
    printf("%s", herBook.author);
    printf("%d", herBook.pageNumber);
    printf("%.2f", herBook.price);

    return 0;
}

book fillBookData(void)
{
    book newBook; //= {" ", " ", 0, 0};

    printf("Enter the name of the book: ");
    scanf("%s", newBook.bookName);

    printf("Enter the name of the author: ");
    scanf("%s", newBook.author);

    printf("Enter the number of pages: ");
    scanf("%d", &newBook.pageNumber);

    printf("Enter the price of the book");
    scanf("%f", &newBook.price);

    return newBook;
}
