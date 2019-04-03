/**********************************************
 * Author: Miguel Osuna
 * Purpose: Determine a Palindrome (Challenge)
 * Date: 21/2/19
***********************************************/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main()
{
    char buffer[SIZE];
    char noSpace[SIZE];
    int i = 0, j = 0, length = 0;
    
    printf("Please enter a sentence or word: ");
    gets(buffer); //anita lava la tina length: 18 characters
    
    while(buffer[length] != '\0')
        length++;
    
    for(i = 0; i < length; i++)
    {
        if(buffer[i] != ' ')
        {
            noSpace[j] = buffer[i];
            j++;
        }
    }
    
    printf("%s", noSpace);
    //noSpace[j] = '\0';
    j = 0;
    
    while(noSpace[j] == noSpace[j])
    {
        printf("%d", j++);
        if(j == sizeof(noSpace))
            printf("Is a palindrome");
    }
    
    return 0;
}
