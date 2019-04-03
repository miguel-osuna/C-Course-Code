/**************************************
 * Author: Miguel Osuna
 * Purpose: Pass by reference example
 * Date: 19/2/19
**************************************/

#include <stdio.h>
#include <stdlib.h>

void squared(int *number);
void mult(int *ptr1, int *ptr2);

int main()
{
    int a, b;
    int *ptr1 = NULL, *ptr2 = NULL;
    ptr1 = &a;
    ptr2 = &b;
    
    printf("Please enter a number: ");
    scanf("%d", ptr1);
    
    printf("Please enter another number: ");
    scanf("%d", ptr2);
    
    squared(ptr1);
    printf("The square of your number is: %d\n", *ptr1);

    //Here we will have a different value for a, because the previous function was passed by reference
    mult(ptr1, ptr2);
    
    return 0;
}

void squared(int *number)
{
    *number *= *number;
    
    return;
}

void mult(int *ptr1, int *ptr2)
{
    printf("%d x %d = %d\n", *ptr1, *ptr2, *ptr1 * *ptr2);
    return;
}