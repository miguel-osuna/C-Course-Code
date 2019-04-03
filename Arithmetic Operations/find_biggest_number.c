/********************************
    Author: Miguel Osuna
    Purpose: Find Biggest Number
    Date: 15/2/19
*********************************/
#include <stdio.h>

int main()
{
    float a, b;
    
    printf("Please enter two number: ");
    scanf("%f %f", &a, &b);
    
    if(a > b)
        printf("\n%.2f is bigger than %.2f", a, b);
        
    else
        printf("\n%.2f is bigger than %.2f", b, a);
        
    return 0;
}
