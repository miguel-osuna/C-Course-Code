#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int freq = 1000;
    int time = 2;

    while(!kbhit())
    {
        printf("You haven't pressed a key\n");
        Beep(freq, time);
    }
    return 0;
}
