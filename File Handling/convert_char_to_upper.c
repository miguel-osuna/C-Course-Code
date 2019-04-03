/**********************************************
 * Author: Miguel Osuna
 * Purpose: Convert Lower characters to Upper
 * Date: 23/2/2019
**********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define OLD "myfile.txt"
#define TEMP "temporal.txt"

int main()
{
    char c;
    char buffer[100];
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;

    fp1 = fopen(OLD, "r+");
    fp2 = fopen(TEMP, "w+");

    if(!fp1 || !fp2)
    {
        printf("Failed to open files");
        return -1;
    }

    while( (c = fgetc(fp1))!= EOF )
    {
        if(islower(c))
            c = toupper(c); //c -= 32;
        fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    fp1 = NULL;
    fp2 = NULL;

    remove(OLD);

    if( rename("C:\\Users\\Miguel Osuna\\OneDrive\\Documentos\\Proyectos\\Udemy C Course\\convert_char_to_upper\\temporal.txt",
               "C:\\Users\\Miguel Osuna\\OneDrive\\Documentos\\Proyectos\\Udemy C Course\\convert_char_to_upper\\myfile.txt") )
        printf("Failed to rename the file\n");
    else
        printf("File renamed succesfully: \n");

    fp1 = fopen(OLD, "r+");

    if(!fp1)
    {
        printf("Failed to open the file\n");
        return -1;
    }

    fgets(buffer, 100, fp1);
    printf("%s", buffer);

    fclose(fp1);
    fp1 = NULL;

    return 0;
}
