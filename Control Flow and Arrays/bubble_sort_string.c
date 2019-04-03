/*Author: Miguel Osuna
  Purpose: String Reverse and Bubble Sorting
  Date: 15/1/19
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char reverseString(char str[]);
char bubbleSort(char str[], int num);

int main()
{   
    int i, numStrings;
    char strings[][MAX];
    
    printf("Hi, enter your number of strings: ");
    scanf("%d", &numStrings);
    
    for(i = 0; i < numStrings; i++)
    {
        printf("\nEnter your string #%d: ", i);
        scanf("%s", strings[i]);
    }
    
    strings[][MAX] = bubbleSort(strings,numStrings);
    
    print("The string array was sorted: \n");
    
    for(i = 0; i < numStrings; i++)
        printf("%s\n", strings[i][MAX]);
    
    /*
    char str[] = "Miguel";
    char revstr[MAX];
    
    strcpy(revstr,reverseString(str));
    printf("%s", revstr);
    
    */
    
    return 0;
}

//Reverses the content of a string in another one
char reverseString(char str[])
{
    /*
    int i, strSize;
    char strRev[MAX];
    
    strSize = strlen(str);
    
    for(i = 0; i < strSize; i++)
        strRev[i] = str[strSize - i - 1];
        
    strRev[strSize] = '\0';
    
    return  strRev;
    */
}

//Sorts the content of an array of strings
char bubbleSort(char str[][MAX], int num)
{
    char temporal[MAX];
    
    for(i = 0; i < num - 1; i++)
        for(j = i + 1; j < num; j++)
            {
                if(strcmp(str[i],str[j]) > 0)
                    {
                        strcpy(temporal,str[i]);
                        strcpy(str[j], str[i]);
                        strcpy(str[i], temporal);
                    }
            }
            
    return str;
}