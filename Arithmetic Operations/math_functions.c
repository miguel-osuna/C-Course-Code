/*Author: Miguel Osuna
  Purpose: Simple Functions
  Date: 1/4/19
*/

#include <stdio.h>
#include <stdlib.h>

//Function prototypes
//It's not necessary to use the same variable names
int gcd(int a, int b);
float absValue(float n);
int squareRoot(int n);

int main(void)
{
    int greatestNum = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    
    float n = 0;
    float m = 0;
    
    printf("Please enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nEnter another number to know it's absolute value: ");
    scanf("%f", &n);
    
    printf("\nEnter a number to know it's square root: ");
    scanf("%d", &num3);
    
    greatestNum = gcd(num1, num2);
    m = absValue(n);
    num4 = squareRoot(num3);
    
    printf("\nThe greatest common divisor of %d and %d is: %d\n", num1, num2, greatestNum);
    printf("\nThe absolute value of %.3f is: %.3f\n", n, -n);
    printf("\nThe square root of %d is: %d", num3, num4);
    
    return 0;
}

//Calculate de gratest common divisor
int gcd(int a, int b)
{
    while(a != b)
    {
        if (a > b)
            a -= b;
        else 
            b -= a;
    }
    
    return a;
}

//Calculate the absolute value
float absValue(float n)
{   
    if(n < 0)
        n = -n;
    
    return n;
}

int squareRoot(int n)
{
    int i = 1;
    int result = 1;
    
    if(n < 0)
        return -1;
        
    if(n == 0 || n == 1)
        return n;
        
    while(result < n)
    {
        i++;
        result = i*i;
    }
    
    return i;
        
}

