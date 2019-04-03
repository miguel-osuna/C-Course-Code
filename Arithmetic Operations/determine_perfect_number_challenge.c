/***************************************
 * Author: Miguel Osuna
 * Purpose: Determine Perfect Number
 * Date: 21/2/19
****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void isPerfect(int number);

int main()
{
    int i;
    
    for(i = 0; i < 1000; i++)
        isPerfect(i);
    
}

void isPerfect(int number)
{
    int sum = 0;
    int i;
    
    //We look for the residual = 0, to know which are divisors, except for number itself
    for(i = 1; i <= number / 2; i++) 
        if(number % i == 0)
            sum += i;
            
    if(number == sum && number != 0)
        printf("%d is a perfect number\n", number);
    else
        printf("%d is not a perfect number\n", number);
    
    return 0;
}