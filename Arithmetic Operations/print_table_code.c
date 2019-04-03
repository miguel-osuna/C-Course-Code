/****************************
 * Author: Miguel Osuna
 * Purpose: Print Table Code
 * Date: 15/2/19
****************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for(i = 0; i < number; i++)
        printf("%d\n", number * i);
    
    return 0;
}