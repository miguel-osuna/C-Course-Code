#include <stdio.h>
#include <stdlib.h>

struct book
{
    char bookName[20];
    char author[20];
    float price;
};

int main()
{
    struct book myBook;
    FILE *fp = NULL;
    char *fileName = "newfile.txt";

    printf("Please enter the name of your book: ");
    scanf("%s", myBook.bookName);

    printf("Please enter the name of the Author: ");
    scanf("%s", myBook.author);

    printf("Please enter the price of your: ");
    scanf("%f", &myBook.price);

    fp = fopen(fileName, "w+");

    if(!fp)
    {
        printf("Failed to open the file");
        return -1;
    }

    fprintf(fp, "The name of the book is: %s\n", myBook.bookName);
    fprintf(fp, "The author's name is: %s\n", myBook.author);
    fprintf(fp, "The price of the book is: %.2f\n", myBook.price);

    fclose(fp);
    fp = NULL;
}
