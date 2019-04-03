/*******************************************
 * Author: Miguel Osuna
 * Purpose: Find the total lines in a file
 * Date: 23/2/19
*******************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char *fileName = "myfile.txt";
    int lines = 0, c;

    fp = fopen(fileName, "r+");
    if(!fp)
    {
        printf("Failed to open file");
        return -1;
    }

    while( (c = fgetc(fp)) != EOF )
    {
        printf("%c", c);
        if(c == '\n')
            lines++;
    }

    printf("\n\nThere is a total of %d lines\n", ++lines); //We increment by 1 because after EOF the line isn't count

    fclose(fp);
    fp = NULL;

    return 0;
}
