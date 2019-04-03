/*Author: Miguel Osuna
  Purpose: Simple Pointer to Structure Example
  Date: 2/1/19
*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

struct dateAndTime
{
    struct Date sdate;
    struct Time stime;
};

int main()
{
    struct dateAndTime myBirthday, *bdayPtr;

    bdayPtr = &myBirthday;

    (*bdayPtr).sdate.day = 2;
    (*bdayPtr).sdate.month = 2;
    (*bdayPtr).sdate.year = 1997;

    bdayPtr->stime.hours = 1;
    bdayPtr->stime.minutes = 30;
    bdayPtr->stime.seconds = 48;

    printf("I was born on %d / %d / %d\n", bdayPtr->sdate.day, bdayPtr->sdate.month, (*bdayPtr).sdate.year);
    printf("At %d:%d:%d %s \n", bdayPtr->stime.hours, bdayPtr->stime.minutes, (*bdayPtr).stime.seconds, (*bdayPtr).stime.hours > 12 ? "PM" : "AM");

    return 0;
}
