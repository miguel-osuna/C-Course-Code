/*********************************************
 * Author: Miguel Osuna
 * Purpose: Return Reverse Number (Challenge)
 * Date: 21/2/19
*********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 10 //Limits the size of the entered number

int main()
{
    int array[10] = {0};
    int number, digit, j, i = 0;
    
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    while(number > 0)
    {
        digit = number % 10;
        array[i] = digit;
        number /= 10;
        i++;
    }
    
    for(j = 0; j < i; j++)
        printf("%d", array[j]);
    
    return 0;
}