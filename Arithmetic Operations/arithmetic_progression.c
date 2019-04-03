/******************************************
 * Author: Miguel Osuna
 * Purpose: Find Arithmetic Progression Sum Series
 * Date: 21/1/19
**************************************************/

#include <stdio.h>
#include <stdlib.h>

int arithmeticProgression(int firstNumber, int totalNumbers, int difference);

int main()
{
    int firstNumber, totalNumbers, difference, sum;
    
    printf("Please enter the first number of the progression: ");
    scanf("%d", &firstNumber);
    
    printf("Please enter the total of numbers of the progression: ");
    scanf("%d", &totalNumbers);
    
    printf("Please enter the difference between the numbers: ");
    scanf("%d", &difference);
    
    sum = arithmeticProgression(firstNumber, totalNumbers, difference);
    printf("The sum is: %d", sum);
    
    return 0;
}

int arithmeticProgression(int firstNumber, int totalNumbers, int difference)
{
    int lastNum, i, sum;
    
    lastNum = firstNumber + difference * (totalNumbers - 1);
    
    for(i = firstNumber; i <= lastNum; i = i + difference)
        sum += i;
        
    return sum;
}