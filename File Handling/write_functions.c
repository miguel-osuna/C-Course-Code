#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    FILE *fp2 = NULL;
    char *fileName = "myfile.txt";
    char *newFile = "newfile.txt";
    int c;

    fp = fopen(fileName, "r+");
    fp2 = fopen(newFile, "w+");

    if(!fp || !fp2)
    {
        printf("Failed to open file");
        return -1;
    }

    while( (c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
        fputc(c, fp2);
    }

    fclose(fp);
    fclose(fp2);

    fp = NULL;
    fp2 = NULL;

    return 0;
}
