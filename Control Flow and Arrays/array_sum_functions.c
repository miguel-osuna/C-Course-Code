/*Author: Miguel Osuna
  Purpose: Array Sum Functions
  Date: 1/24/19
*/

#include <stdio.h>

float arraySum(int array[], int size);
float arraySumPointer(int array[], int size);
float arraySumPointer_2(int *array, int size);
float arraySumPointer_3(int *array, int size);

int main()
{
    int array[] = {3,2,5,2,5,1,5,1,6,1};
    
    printf("Result: %.3f\n", arraySum(array, sizeof(array)/sizeof(array[0]) ));
    printf("Result: %.3f\n", arraySumPointer(array, sizeof(array)/sizeof(array[0]) ));
    printf("Result: %.3f\n", arraySumPointer_2(array, sizeof(array)/sizeof(array[0]) ));
    printf("Result: %.3f\n", arraySumPointer_3(array, sizeof(array)/sizeof(array[0]) ));
    
    return 0;
}

float arraySum(int array[], int size)
{
    int i;
    float sum = 0.0;
    
    for(i = 0; i < size; i++)
        sum += array[i];
    
    return sum;
}


float arraySumPointer(int array[], int size)
{
    int *ptr;
    int *const finalAddress = array + size;
    float sum = 0.0;
    
    for(ptr = array; ptr < finalAddress; ++ptr)
        sum += *ptr;
    
    return sum;
}

float arraySumPointer_2(int *array, int size)
{
    int *const finalAddress = array + size;
    float sum = 0.0;
    
    for(; array < finalAddress; ++array)
        sum += *array;
    
    return sum;
}

float arraySumPointer_3(int *array, int size)
{
    int i;
    float sum = 0.0;
    
    for(i = 0; (array + i) < (array + size); ++i)
        sum += *(array + i);
    
    return sum;    
}

