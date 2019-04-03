/***********************************************************
 * Author: Miguel Osuna
 * Purpose: Find Sign of a Number using Conditional Operator
 * Date: 15/2/19
***********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if(number != 0)
        printf("%d is: %s\n", number, number > 0 ? "positive" : "negative");
    else
        printf("0 is neither positive or negative");
    
    return 0;
}