/*
    Author: Miguel Osuna
    Purpose: Implement the output funcitons for file handling
    Date: 2/6/19
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *filePtr = NULL;
    char *fileName = "myfile.txt";
    char day[] = "Wednesday";
    char name[] = "My name is Miguel";
    int hours = 6;
    int minutes = 40;

    filePtr = fopen(fileName, "w"); //If there is no file named "myfile.txt", fopen() will create one because of "w" mode

    if(!filePtr) //Check for NULL character
    {
        printf("Failed to open file");
        return STDERR_FILENO;
    }

    fputs("Today is: \n", filePtr); //Ads a character string to the first line of the file
    fprintf(filePtr, "%s %d %d\n", day, hours, minutes); //Add the formatted output to the file until a new line is found. Then a new line is specified

    for(int i = 0; i < strlen(name); i++) //Adding 'name' string to "myfile.txt" on the third line
        fputc(name[i], filePtr);          //Has to be added character by character (inefficient)

    fclose(filePtr);
    filePtr = NULL;

    return 0;
}
