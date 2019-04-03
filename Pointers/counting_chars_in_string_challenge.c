/*Author: Miguel Osuna
  Purpose: Counting Charactes in a String (Challenge)
  Date: 1/29/19
*/

#include <stdio.h>
#include <stdlib.h>

int countLength(const char *ptr);

int main()
{
    int length;
    char myName[] = "Miguel Osuna";
    char *namePtr = myName;
    
    length = countLength(namePtr);
    printf("The name is: %s\n", myName);
    printf("The length of the name is: %d characters\n", length);

    return 0;
}

int countLength(const char *ptr)
{
    char *secondPtr = ptr;
    while(*secondPtr) //Another wat to do it: while(*secondPtr != '\0') 
        ++secondPtr;

    return secondPtr - ptr;
}