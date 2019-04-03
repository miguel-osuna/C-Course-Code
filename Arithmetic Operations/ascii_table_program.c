/********************************
    Author: Miguel Osuna
    Purpose: ASCII Table Program
    Date: 2/14/19
********************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char i;

    for(i = 1; i < 256; i++)
        printf("The ASCII of \t%c is: %d\n", i, i);

    return 0;
}

