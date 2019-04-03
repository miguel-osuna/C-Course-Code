/*Author: Miguel Osuna
  Purpose: Using Pointers as Parameters (Challenge)
  Date: 1/29/19
*/ 

#include <stdio.h>
#include <stdlib.h>

void sqrtVal(float *const number); //It doesn't return anything, that's why is void

int main()
{
    float *number = (float *)malloc(sizeof(float)); //Allocate memory for number variable
    *number = 5;
        
    printf("The square of number: %.3f is: ", *number);
    sqrtVal(number);
    printf("%.3f\n", *number);
    
    return 0;
}

void sqrtVal(float *const number) //The address doesn't change
{
    *number *= *number;
    return;
}
