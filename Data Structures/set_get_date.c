#include <stdio.h>
#include <stdlib.h>
#include <dos.h> //This functions is not available in this compiler

int main()
{
    struct dosdate_t day;
    struct dostime_t time;

    _dos_getdate(&day); //Get's the date of the current day
    _dos_gettime(&time); //Get's the time of the current day

    printf("The current day is: %d\n", day.day);
    printf("The current month is: %d\n", day.month);
    printf("The current year is: %d\n", day.year);

    printf("The current hour is: %d\n", time.hour);
    printf("The current minutes are: %d\n", time.minute);
    printf("The current seconds are: %d\n", time.second);

    day.day = 2;
    day.month = 11;
    day.year = 2019;
    printf("Setting date to: %d/%d/%d", day.day, day.month, day.year);
    _dos_setdate(&day);

    time.hour = 5;
    time.minutes = 30;
    time.seconds = 0;
    printf("Setting time to: %d:%d:%d", time.hour, time.minute, time.second);
    _dos_settime(&time);

    return 0;
}
