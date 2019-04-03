/*Author: Miguel Osuna
  Purpose: Pointers Basics (C Challenge)
  Date: 29/1/19
*/

#include <stdio.h>

int main()
{
    float pi = 3.1416;
    float *ptr = NULL;
    
    ptr = &pi;
    
    printf("The pointers address is: %p\n", (void *)&ptr); //%p is always for printig addresses
    printf("The pointers content is: %p\n", ptr);
    printf("The variable the pointer is poiting to is: %.4f\n", *ptr);

    return 0;
}
