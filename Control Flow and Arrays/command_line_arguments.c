/***********************************
    Author: Miguel Osuna
    Purpose: Command Line Arguments
    Date: 2/11/19
*************************************/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("The total number of arguments are: %d\n", argc);
    for(i = 0; i < sizeof(argv); i++)
        printf("Argument %i is: %s\n", i, *(argv+i)); //Can be: argv[i]

    return 0;
}
