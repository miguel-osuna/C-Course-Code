/*Author: Miguel Osuna
  Purpose: Get String Characters
  Date: 24/1/19
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char string[] = "My name is Miguel Osuna";
    char *ptr = string;
    
    for(i = 0; i < strnlen(string, sizeof(string)); i++)
        printf("string[%d] = '%c', *(ptr + %d) = '%c', &string[%d] = %p, ptr + %d = %p\n", i, string[i], i, *(string + i), i, &string[i], i, ptr + i); 

    return 0;
}
