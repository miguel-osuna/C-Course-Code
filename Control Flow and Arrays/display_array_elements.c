/*************************************
* Author: Miguel Osuna
* Purpose: Display Elements of Array
* Date: 15/2/19
*************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, array[5] = {15, 16, 17, 18, 19};
    
    for(i = 0; i < 5; i++)
        printf("array[%d] = %d\n", i, array[i] + 1);
        
    return 0;
}
