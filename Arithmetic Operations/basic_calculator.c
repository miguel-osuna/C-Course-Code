/******************************
    Author: Miguel Osuna
    Purpose: Basic Calculator Program
    Date: 2/14/19
*******************************/
#include <stdio.h>
#include <conio.h>

int main()
{
    float a = 1, b = 2;
    char ch;
    
    printf("\nEnter one of the following letters for: \n");
    printf("\'A\' for Addition\n");
    printf("\'S\' for Substraction\n");
    printf("\'M\' for Multiplication\n");
    printf("\'D\' for Division\n");

    ch = toupper(getch());
    printf("You entered: %c\n\n", ch);
    
    switch(ch)
    {
        case 'A':
            printf("Enter your first number: ");
            scanf("%f", &a);
            printf("Enter your sencond number: ");
            scanf("%f", &b);
            printf("\nYou selected Addition: %.3f + %.3f = %.3f", a, b, a + b);
            break;
        
        case 'S':
            printf("Enter your first number: ");
            scanf("%f", &a);
            printf("Enter your sencond number: ");
            scanf("%f", &b);
            printf("\nYou selected Substraction: %.3f - %.3f = %.3f", a, b, a - b);
            break;
            
        case 'M':
            printf("Enter your first number: ");
            scanf("%f", &a);
            printf("Enter your sencond number: ");
            scanf("%f", &b);
            printf("\nYou selected Multiplication: %.3f * %.3f = %.3f", a, b, a * b);
            break;
            
        case 'D':
            printf("Enter your first number: ");
            scanf("%f", &a);
            printf("Enter your sencond number: ");
            scanf("%f", &b);
            if(b == 0)
            {
                    printf("NaN\n");
                    break;
            }
            printf("\nYou selected Division: %.3f / %.3f = %.3f", a, b, a / b);
            break;
        
        default: 
        printf("Wrong operation");
    }

    return 0;
}

