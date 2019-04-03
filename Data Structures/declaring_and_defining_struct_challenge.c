/**************************************************************
    Author: Miguel Osuna
    Purpose: Declaring and Initializing a Structure (Challenge)
    Date: 2/1/19
***************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct employee getInfo(void);

struct employee
{
    char name[10];
    char hireDate[10];
    float salary;
};

int main()
{
    struct employee firstEmployee = { "Omar", "25/10/18", 400000 };
    struct employee newEmployee[3];

    newEmployee[0] = getInfo();
    newEmployee[1] = getInfo();
    newEmployee[2] = getInfo();

    printf("\nThe names of the employees are: %s and %s \n", firstEmployee.name, newEmployee[0].name);
    printf("The hire date of the employees is: %s and %s\n", firstEmployee.hireDate, newEmployee[0].hireDate);
    printf("The salary of the employees is: %.2f and %.2f\n", firstEmployee.salary, newEmployee[0].salary);

    return 0;
}

struct employee getInfo(void)
{
    struct employee newEmployee;

    printf("Name of the new employee: ");
    scanf("%s", newEmployee.name);
    printf("Hire date of the second employee: ");
    scanf("%s", newEmployee.hireDate);
    printf("Salary per year of the second employee: ");
    scanf("%f", &newEmployee.salary);
    printf("\n");

    return newEmployee;
}
