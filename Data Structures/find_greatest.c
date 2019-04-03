/*********************************************************
 * Author: Miguel Osuna
 * Purpose: Find Greatest of 3 Numbers Entered by the User
 * Date: 15/2/19
*********************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    int b;
    int c;
} numbers;

numbers captureNumbers(void);
int greatestNumber(numbers userNums);

int main()
{
    numbers userNums = captureNumbers();
    printf("The greatest number is: %d", greatestNumber(userNums));

    return 0;
}

numbers captureNumbers(void)
{
    numbers userNums;
    
    printf("Please enter 3 numbers");
    printf("First number: ");
    scanf("%d", &userNums.a);
    printf("Second number: ");
    scanf("%d", &userNums.b);
    printf("Third number: ");
    scanf("%d", &userNums.c);
    
    return userNums;   
}

int greatestNumber(numbers userNums)
{
    int greatest;
    
    if(userNums.a > userNums.b)
    {
        if(userNums.a > userNums.c)    
            greatest = userNums.a;
        else
            greatest = userNums.c;
    }
    
    else
    {
        if(userNums.a > userNums.c)
            greatest = userNums.a;
            
        else
            greatest = userNums.c;
    }
    
    return greatest;   
}