#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Reading characters from the text file
    FILE *fp = NULL;
    int c;

    fp = fopen("text.txt", "r");

    if(!fp) //Make sure there is no error trying to open the text file
    {
        printf("There was an error");
        return (-1);
    }

    while( (c = fgetc(fp)) != EOF) //Read a single character until get to the End of File
        printf("%c", c);

    fclose(fp); //Closing the text file
    fp = NULL;
    */

    /*
    //Reading a string for the text file
    FILE *fp = NULL;
    char str[40];

    //Opening file for reading
    fp = fopen("text.txt", "r");

    if(!fp)
    {
        printf("Error opening file");
        return -1;
    }

    //Writing content to stdout
    if(fgets(str, 40, fp) != NULL)
        printf("%s", str);

    fclose(fp);
    fp = NULL;

    */

    //Reading formatted input from a file
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("text.txt", "w+");

    if(fp)
        fputs("My name is 7", fp);

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String 1 |%s|\n", str1);
    printf("Read String 2 |%s|\n", str2);
    printf("Read String 3 |%s|\n", str3);
    printf("Read Integer |%d|\n", year);

    fclose(fp);
    fp = NULL;

    return 0;
}
