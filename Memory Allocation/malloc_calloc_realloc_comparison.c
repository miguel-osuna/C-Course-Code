/*Author: Miguel Osuna
  Purpose: Malloc, calloc and realloc comparison
  Date: 1/28/19
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *myName = NULL; //Define the pointer type char with an address
    float pi = 3.1416;
    float *ptr = &pi;

    myName = (char *)malloc(10 * sizeof(char) ); //Allocate memory for myName
    strcpy(myName, "Miguel"); //If we tried to copy "Miguel" without the memory allocation, the program would crash, because there is no memory address
    
    printf("My name is: %s, Address of my name: %u\n",myName, myName);
    
    myName = (char *)realloc(myName, 15 * sizeof(char) );
    strcat(myName, " Osuna");
    
    printf("My name is: %s, Address of my name: %u\n\n", myName, myName);
    
    free(myName); //We always free memory
    
    ptr = (float *)malloc(sizeof(float) * 1); //Initializes in 0 all bytes, so we have to define again
    ptr = &pi; //Then, we allocate pi to pointer ptr
    
    for(int i = 0; i < 10; i++)
    {
        printf("The address is: %u\n", (ptr+i));
        printf("The content of the variable pointed to: %.3f\n\n", *(ptr+i));
    }
    
    free(ptr);
    
    return 0;
}
