/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int i;
    int array[10];
    int count=10;
    float average;
    double suma=0;
    
    for(i=0; i<count; i++)
    {
        printf("%2u> ", i + 1);
        scanf("%d",&array[i]);
        suma += array[i];
    }
    
    average= suma / count;
    printf("\n La suma es %.3f", average);
    
    return 0;
}
