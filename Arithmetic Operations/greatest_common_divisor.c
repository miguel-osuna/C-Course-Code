/************************************
 * Author: Miguel Osuna
 * Purpose: Greatest Common Divisor
 * Date: 21/2/19
************************************/

#include <stdio.h>
#include <stdlib.h>

int gdb(int a, int b);

int main()
{
    int a, b, c;
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    c = gdb(a, b);
    printf("The greatest common divisor of %d and %d is %d", a, b, c);
    
    return 0;    
}

int gdb(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    
    return a;
}