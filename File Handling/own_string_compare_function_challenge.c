/***************************************************
 * Author: Miguel Osuna
 * Purpose: Own String Compare Function (Challenge)
 * Date: 21/2/19
***************************************************/

#include <stdio.h>
#include <stdio.h>

int stringCmp(char *firstString, char *secondString);

int main()
{   
    char *firstName = "Miguel Angel";
    char *secondName = "Miguel Angel";
    
    if(stringCmp(firstName, secondName) == 0)
        printf("The strings are the same length");
        
    else if(stringCmp(firstName, secondName) == 1)
        printf("The first string is longer than the second one");
        
    else if(stringCmp(firstName, secondName) == -1)
        printf("The second string is longer than the first one");
        
    return 0;
}

int stringCmp(char *firstString, char *secondString)
{
    int firstLength = 0, secondLength = 0, value;
    
    while(*(firstString + firstLength) != '\0')
        firstLength++;
        
    while(*(secondString + secondLength) != '\0')
        secondLength++;
    
    if(firstLength == secondLength)
        value = 0;
    
    else if(firstLength > secondLength)
        value = 1;
        
    else
        value = -1;
    
    return value;
}
