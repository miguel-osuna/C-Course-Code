/*************************************
    Author: Miguel Osuna
    Purpose: Number Sign
    Date: 2/15/19
*************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    if(number < 0)
        printf("\n%d is a negative number", number);
    
    else if(number > 0)
        printf("\n%d is a positive number", number);
        
    else
        printf("\n%d is neither negative or positive", number);

    return 0;
}
