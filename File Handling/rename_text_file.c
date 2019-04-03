#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Full path has to be added in order to work
    char *oldFile = "C:\\Users\\Miguel Osuna\\OneDrive\\Documentos\\Proyectos\\Udemy C Course\\rename_text_file\\rename_file\\newfile.txt";
    char *newFile = "C:\\Users\\Miguel Osuna\\OneDrive\\Documentos\\Proyectos\\Udemy C Course\\rename_text_file\\rename_file\\newestfile.txt";

    if( rename(oldFile, newFile) == 0 )
        printf("File successfully renamed");
    else
        printf("Failed to rename file");

    return 0;
}
