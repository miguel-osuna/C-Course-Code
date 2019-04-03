/*Author: Miguel Osuna
  Purpose: Pass by Value Example
  Date: 1/27/19
*/

//This example demonstrates the effect of a pass by value function and a pass by reference function

#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);
void swapPtr(int *x, int *y);

int main()
{
    int a = 100;
    int b = 200;
    
    //Printing out before swap function
    printf("Before swap function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    //Using swap function
    swapPtr(&a,&b);
    
    //Printing out after swap function
    printf("After swap function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    return;
}

void swapPtr(int *x, int *y)
{   
    int temp = *x;
    *x = *y;
    *y = temp;
    return;    
}
