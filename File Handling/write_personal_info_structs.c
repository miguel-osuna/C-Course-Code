/***********************************************
 * Author: Miguel Osuna
 * Purpose: Write Personal Information Function (Using Structs)
 * Date: 19/2/19
***********************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    char *gender;
    int age;
    float weight;
    float height;
} info;

void printInfo(info person);

int main()
{
    info mySelf = {"Miguel", "Male", 22, 85, 1.75};
    printInfo(mySelf);
    
    return 0;
}

void printInfo(info person)
{
    printf("Your name is: %s\n", person.name);
    printf("You are a %s\n", person.gender);
    printf("You are %d years old\n", person.age);
    printf("Your weight is %.2f kilograms\n", person.weight);
    printf("Youre height is %.2f meters\n", person.height);
    
    return;
}