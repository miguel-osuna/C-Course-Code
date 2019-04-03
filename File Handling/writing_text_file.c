#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char *textfile = "newestfile.txt";

    fp = fopen(textfile, "r");
    if(fp == NULL)
        printf("Failed to open: %s\n", textfile);

    if( fclose(fp) == EOF )
        printf("Error closing file");
    else
        {
            printf("File successfully closed");
            fp = NULL;
        }
}
