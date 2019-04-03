/****************************************
 * Autor: Miguel Osuna
 * Purpose: String Pointer Array Example
 * Date: 2/19/19
*****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char *family[5] = {"Miguel Angel Osuna Angulo", 
                       "Omar Alonso Osuna Angulo",
                       "Maida Regina Osuna Angulo",
                       "Miguel Angel Osuna Lopez",
                       "Maida Celina Angulo Rocha"
                       };
    
    printf("The members of the family are:\n");
    
    for(i = 0; i < 5; i++) //I can't use the sizeof technique to determine the size of the char array
    {
        printf("The member No. %d is: %s\n", i + 1, family[i]);
    }
    
    return 0;
}