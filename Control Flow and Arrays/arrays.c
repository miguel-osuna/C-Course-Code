#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

int main()
{
    int days[MONTHS] = {31, 28, [5]=31, 30, 31, [1]=29};
    int index;

    int array_values [4][3] = {
                                {32, 23, 53},
                                {34, 65, 56},
                                {76, 76, 13},
                                {78, 78, 23}
                            };

    for(index = 0; index < MONTHS; index++)
        printf("Month %d has %2d days .\n", index + 1, days[index]);

    return 0;
}
