/********************************
 * Author: Miguel Osuna
 * Purpose: Goto Keyword Example
 * Date: 2/15/19
********************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        
        if(i == 5)
            goto printnow;
    }
    
    printnow: 
        printf("I'm now out of the for loop\n");
    
    return 0;
}
