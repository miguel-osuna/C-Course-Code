/*Author: Miguel Osuna
 *Purpose: Structure with Pointers
 *Date: 2/1/19
*/

#include <stdio.h>

struct intPtrs
{
    int *p1;
    int *p2;
};

int main()
{
    int hisAge, herAge;
    struct intPtrs agePointers = { &hisAge, &herAge };
    
    *agePointers.p1 = 22;
    *agePointers.p2 = 32;
    
    printf("His age is: %d years old. \nHer age is: %d years old.\n", *agePointers.p1, *agePointers.p2);
    return 0;
}
