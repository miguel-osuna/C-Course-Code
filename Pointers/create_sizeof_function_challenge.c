/**********************************************
 * Author: Miguel Osuna
 * Purpose: Create Sizeof Function (Challenge)
 * Date: 21/2/19
**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p1 = NULL;
    p1 = (float *)p1 + 1;
    
    printf("The size of %s is: %d", "int", p1); //%p for pointer addresses
    
    return 0;
}