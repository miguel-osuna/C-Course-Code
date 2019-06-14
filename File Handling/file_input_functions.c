/*
    Author: Miguel Osuna
    Purpose: Implement all input functions for file handling.
    Date: 2/6/19

    myfile.txt contains the following:
    Today is:
    Wednesday 6 30
    And my name is Miguel Osuna
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Define all the variables needed
    FILE *filePtr = NULL;
    char *fileName = "myfile.txt";
    char str[60];
    int c, minutes, hours;

    filePtr = fopen(fileName, "r");

    if(!filePtr)
    {
        printf("Failed to open file");
        return -1;
    }

    if( fgets(str, 60, filePtr) != NULL ) //Returns NULL until reaches EOF or a new line: \n
        printf("%s", str);

    fscanf(filePtr, "%s %d %d", str, &hours, &minutes);
        printf("%s %d %d", str, hours, minutes);

    while((c = fgetc(filePtr)) != EOF || c == '\n') //Works just for reading the rest of the file
        printf("%c", c);

    fclose(filePtr);
    filePtr = NULL;

    return 0;
}
