#include <stdio.h>
#include <stdlib.h>

#define totalYears 5
#define totalMonths 12

int main()
{
    //We define variables
    char years[] = {'4', '5', '6', '7', '8', '\0'};
    float rainfall[5][12] = { {12.54, 45.1, 19.5, 24.210, 24.89, 32.5, 27.4, 21.36, 12.56, 14.25, 18.45, 19.67},
                              {14.58, 22.41, 26.47, 14.689, 12.54, 19.97, 25.26, 27.77, 24.68, 36.38, 31.25, 33.247}, 
                              {18.47, 21.54, 22.68, 23.58, 24.78, 35.58, 39.25, 14.78, 28.14, 12.45, 18.58, 17.68}, 
                              {28.58, 29.47, 26.47, 19.47, 21.254, 23.65, 25.569, 24.10, 26.26, 41.56, 35.46, 24.587}, 
                              {39.87, 28.45, 37.214, 28.578, 24.156, 26.654, 26.34, 28.978, 14.1254, 11.247, 15.245, 15.589}
                            };
    
    float averagePerYear[5] = {0};
    float monthlyAverages[12] = {0};
    float averageAllYears = 0;
    
    printf("\nThe yearly average is:\n\n");
    
    int i, j;
    //Calculate the yearly averages
    for(i = 1; i <= totalYears; i++)
    {    
        printf("YEAR: 201%c\t", years[i-1]);
        
        for(j= 1; j <= totalMonths; j++)
        {
            averagePerYear[i-1] += rainfall[i-1][j-1] / totalMonths;
        }
        printf("Rainfall: %.3f inches\n", averagePerYear[i-1]);        
        
        averageAllYears += averagePerYear[i-1] / totalYears;
    }
    
    printf("\nThe average of Rainfall from 201%c to 201%c is: %.4f inches\n\n", years[0], years[4], averageAllYears);
    printf("These are the monthly averages:\n\n");
    
    //Calculate the monthly averages
    for(j = 1; j <= totalMonths; j++)
    {
        printf("MONTH: %d\t", j);
        
        for(i = 1; i <= totalYears; i++)
        {
            monthlyAverages[j-1] += rainfall[i-1][j-1] / totalYears;
        }
        
        printf("Rainfall: %.3f inches\n", monthlyAverages[j-1]);
    }
    
    return 0;
}

