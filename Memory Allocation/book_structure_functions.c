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

book fillBookData(void); //You could also create a void function that gets a pointer of type struct

int main() 
{
    book herBook;
    herBook = fillBookData();
    printf("\n%s", herBook.bookName);
    printf("%s\n", herBook.author);
    printf("%d\n", herBook.pageNumber);
    printf("%.2f\n", herBook.price);
    
    return 0;
}

book fillBookData(void)
{
    book newBook;
    //We use a temporal char string to copy and paste the correct strings
    char buffer[255];

    printf("Enter the name of the book: ");
    gets(buffer);
    newBook.bookName = (char *) malloc(sizeof(buffer) + 1);
    strcpy(newBook.bookName, buffer);
    
    printf("Enter the name of the author: ");
    gets(buffer);
    newBook.author = (char *) malloc(sizeof(buffer) + 1);
    strcmp(newBook.author, buffer);
    
    printf("Enter the number of pages: ");
    scanf("%d", &newBook.pageNumber);
    
    printf("Enter the price of the book: ");
    scanf("%f", &newBook.price);
    
    return newBook;
}


