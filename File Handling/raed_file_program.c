/************************
    Author: Miguel Osuna
    Purpose: Read File Program
    Date: 2/2/19
************************/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int c;
    
    fp = fopen("file.txt", "r");
    
    if(!fp) //If fp stores == NULL
    {
        printf("There was an error reading the file");
        return (-1);
    }
    
    //Read a single character
    while(c = fgetc(fp) != EOF)
        printf("%d", c);
        
    fclose(fp);
    fp = NULL;

    return 0;
}
