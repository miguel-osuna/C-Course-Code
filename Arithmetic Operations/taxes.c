/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //Variable declarations
    const int payRate = 12;
    const int overtime = 40;
    int hoursWork;
    float grossPay = 0.0;
    float taxes = 0.0;
    float netPay = 0.0;
    
    //Input by the user
    printf("Introduce the number of hours per week you work: ");
    scanf("%d", &hoursWork);
    
    //Gross Pay Calculation
    if (hoursWork > overtime)
    {
        grossPay = payRate * 1.5 * ( hoursWork - overtime );
        grossPay += payRate * overtime;
    }
    
    else
    {
        grossPay = payRate * hoursWork;
    }
    
    //Taxes Calculation
    if ( grossPay > 450 )
    {
        taxes = (float) 25 / 100 * ( grossPay - 450 );
        taxes += (float) 20 / 100 * 150;
        taxes += (float) 15 / 100 * 300;
    }
    
    else if ( grossPay > 300 && grossPay <= 450 )
    {
        taxes = (float) 20 / 100 * ( grossPay - 300 );
        taxes += (float) 15 / 100 * 300;
        
    }
    
    else 
    {
        taxes = (float) 15 / 100 * grossPay;
    }
    
    //Net Pay Calculation
    netPay = grossPay - taxes;
    
    printf("\nYour pay before taxes is: %.4f", grossPay);
    printf("\nYour taxes are: %.4f", taxes);
    printf("\nYour net pay after taxes is: %.4f", netPay);
    
    return 0;
}
