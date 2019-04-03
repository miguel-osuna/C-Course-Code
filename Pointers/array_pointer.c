/**********************************
 * Author: Miguel Osuna
 * Purpose: Array Pointer
 * Date: 19/2/19
************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = NULL;
    
    ptr = array; //It can be written as &array[0] too
    
    printf("The array address stored in ptr is: %p\n\n", ptr);
    
    printf("This is how to access all the elements of an array through a pointer\n");
    for(i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        printf("Element[%d] address is: %p\t\t", i, (ptr + i) ); //You could use &array[i] to display its address
        printf("Element[%d] content is: %d\n", i, *(ptr + i) ); //You could simply use array[i] to display its content
    }
    
    return 0;
}
