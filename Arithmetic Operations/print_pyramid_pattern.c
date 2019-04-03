/********************************************
 * Author: Miguel Osuna
 * Purpose: Print Pyramid Pattern to Screen
 * Date: 22/2/19
********************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, inc, i, j, cntr = 0;
    printf("Please enter the number of rows you want: ");
    scanf("%d", &rows);
    
    printf("Please enter the increment between rows: ");
    scanf("%d", &inc);
    printf("\n");
    
    for(i = rows - 1; i >= 0; i--) //For loop for the tracking of the rows
    {
        cntr++; //Counter for knowing how many stars to print
        for(j = 0; j < i; j++) //Foor loop for printing blank spaces
            printf(" ");
            
        for(j = 1; j < cntr * inc; j++) //For loop for printing the starts per row
            printf("*");
        printf("\n"); //Prints a new row to get the pyramid shape
    }
    
    return 0;
}