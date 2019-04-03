/*Author: Miguel Osuna
  Purpose: String Functions
  Date: 1/15/19
*/

#include <stdio.h>
#include <stdbool.h>

int strLength(char str[]);
void strConcatenate(char str1[], char str2[]);
bool strCompare(char str1[], char str2[]);
//char strConcatMod(char str1[], char str2[])

int main()
{
    char str[] = "My name is Miguel";
    char str1[] = "Miguel is my name";
    char str2[] = "Miguel is my name ";
    
    printf("The lenght of the string is: %d\n\n", strLength(str));
    strConcatenate(str1,str2);
    printf("The strings are %s\n\n", strCompare(str1,str2) ? "equal" : "not equal");
    
    return 0;
}

//The function looks for a NULL character, if so, stop adding to the counter
int strLength(char str[])
{
    unsigned int i=0;
    
    while(str[i] != '\0')
        i++;
        
    return i;
}

//This function prints in terminal one string after another, without spaces
void strConcatenate(char str1[], char str2[])
{
    printf("%s", str1);
    printf("%s", str2);
    printf("\n\n");
}

//This function compares whether two strings are equal or not
bool strCompare(char str1[], char str2[])
{
    int i = 0;
    bool sameString = 1;
    
    while( (str1[i] != '\0' || str2[i] != '\0') && sameString)
    {
        if(str1[i] != str2[i])
            sameString = 0;
        i++;
    }
    
    return sameString;
}

/*
//Function to combines two arrays into one
char strConcatMod(char str1[], char str2[])
{
    int i; 
    int lengthOne, lengthTwo;
    
    lengthOne = strlength(str1);
    lengthTwo = strlenght(str2);
    char newString[lengthOne + lengthTwo];
    
    for(i = 0; i < lengthOne; i++)
    {
        newString[i] = str1[i];
    }
    
    for(i = 0; i < lengthTwo; i++)
    {
        newString[i + lengthOne] = str2[i];   
    }
    
    return newString;
}
*/
