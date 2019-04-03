/**********************************
 * Author: Miguel Osuna
 * Purpose: Display Student Career
 * Date: 15/2/19
**********************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char career;
    printf("MENU\n");
    printf("'A': Arts\n");
    printf("'C': Commerce\n");
    printf("'S': Science\n");
    
    printf("Enter the desired career: ");
    career = toupper( getch() );
    
    switch(career)
    {
        case 'A' :
            printf("\nYou need a mark between 40 and 60 for Arts");
            break;
            
        case 'C' :
            printf("\nYou need a mark between 60 and 70 for Commerce");
            break;
            
        case 'S' :
            printf("\nYou need a mark between 70 and 100 for Science");
            break;
            
        default: 
            printf("\nPlease enter a valid option");
    }
    
    return 0;
}
