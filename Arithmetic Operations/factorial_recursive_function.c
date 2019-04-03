/******************************************
    Author: Miguel Osuna
    Purpose: Factorial Recursive Function
    Date: 2/11/19
******************************************/

#include <stdio.h>

float factorial(int num);

int main()
{
    printf("The factorial of %d is: %f", 5, factorial(5));
    return 0;
}

float factorial(int num)
{
    printf("The value of num is: %d\n", num);
    if(num <= 1)
        return 1;

    else
        return (num * factorial(num-1));
}