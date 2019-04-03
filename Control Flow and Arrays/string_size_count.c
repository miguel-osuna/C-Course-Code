/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str1[] = "To be or not to be";
    char str2[] = ",that is the question";
    unsigned int count;
    
    while(str1[count] != '\0')
        count++;
        
    printf("The lenght of the string \"%s\" is %d characters\n",str1, count);
    
    count = 0;
    
    while(str2[count] != '\0')
        count++;
        
    printf("The lenght of the string \"%s\" is %d characte\n",str2, count);
    
    return 0;
}
