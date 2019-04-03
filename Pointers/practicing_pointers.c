/*Author: Miguel Angel Osuna
  Purpose: Practicing Pointers
  Date: 1/22/19
*/
  
#include <stdio.h>


int main()
{
    int number = 0;
    int *pNumber = NULL;
    
    //First, displaying from number perspective
    number = 2019;
    printf("The value of number is: %d \n", number);
    printf("The address of number is: %p \n", &number);
    
    //Now, from the perspective of pnumber
    pNumber = &number;
    
    printf("\nThe content of the pointer is: %p \n", pNumber);
    printf("The address of the pointer is: %p \n", (void*)&pNumber);
    printf("The size of the pointer is: %d bytes \n", sizeof(pNumber));
    printf("The content of the address pointed to is: %d \n", *pNumber);

    return 0;
}
