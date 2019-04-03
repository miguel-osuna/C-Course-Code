/*Author: Miguel Osuna
  Purpose: Using Dynamic Memory (Challenge)
  Date: 1/29/19
*/

#include <stdio.h>
#include <stdlib.h>

// The user has the responsability to check if there's a buffer overflow

int main()
{
    int numBytes = 0;
    char *ptr = NULL;
    
    printf("Enter the limit of your text: ");
    scanf("%d\n", &numBytes);
    
    ptr = (char *) malloc(numBytes * sizeof(char) ); //1 bytes is 1 character. malloc returns a void pointer, or so called an address
    
    if(ptr) //We check for any address except for NULL, because that means there's an error
    {
        printf("Now enter your string: ");
        scanf(" "); //This makes a pause to display the message above
        gets(ptr);
        printf("You entered: %s\n", ptr);    
    }
    
    free(ptr); //We free the memory that was allocated
    ptr = NULL; //Set the pointers address to NULL again
    
    return 0;
}
