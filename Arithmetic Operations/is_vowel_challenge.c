/*********************************
 * Author: Miguel Osuna
 * Purpose: Is Vowel? (Challenge)
 * Date: 20/1/19
**********************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch;
    
    printf("Please enter a key: ");
    scanf("%c", &ch);
    
    printf("You pressed: %c\n", ch);
    ch = tolower(ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("You pressed a vowel\n");
    else
        printf("You didn't press a vowel\n");
    
    return 0;
}
