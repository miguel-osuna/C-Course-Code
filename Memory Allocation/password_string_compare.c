/**************************************
 * Author: Miguel Osuna
 * Purpose: Password String Compare
 * Date: 19/2/19
***************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void enterPassword(char newPassword[]); //This is the best technique to return a string pointer: having and returning a pointer
bool comparePasswords(char *newPassword, char *oldPassword); //This is the same way as if you would use the pointer expression: char newPassword[], char oldPassword[]

int main()
{   
    int size = 10;
    char *newPassword = (char *) malloc(size * sizeof(char));
    char *oldPassword = "ok";
    bool samePass;
    
    enterPassword(newPassword);
    
    samePass = comparePasswords(newPassword, oldPassword);
    
    if(samePass)
        printf("Same Password: Access granted");
    else
        printf("Different Password: Access denied");
    
    free(newPassword);
    
    return 0;
}

void enterPassword(char newPassword[]) //Same use as *newPassword
{   
    printf("Enter your password: ");
    scanf("%s", newPassword);
    return newPassword;
}

bool comparePasswords(char *newPassword, char *oldPassword)
{
    bool isSamePass;
    
    if(strcmp(newPassword, oldPassword) == 0)
        isSamePass = true;
    else 
        isSamePass = false;
        
    return isSamePass;
}


