/**********************************************
 * Author: Miguel Osuna
 * Purpose: Pointer Arithmetic Example
 * Date: 19/2/19
***********************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    int *p1 = NULL;
    int *p2 = NULL;
    
    p1 = &a;
    p2 = &b;
    
    printf("Please enter a number: ");
    scanf("%d", p1);
    
    printf("Please enter another number: ");
    scanf("%d", p2);
    
    printf("%d + %d = %d\n", a, b, (*p1) + (*p2) );
    printf("%d - %d = %d\n", a, b, (*p1) - (*p2) );
    printf("%d x %d = %d\n", a, b, (*p1) * (*p2) );
    printf("%d / %d = %d\n", a, b, (*p1) / (*p2) );

    return 0;
}