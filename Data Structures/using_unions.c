/***************************************
 * Author: Miguel Osuna
 * Purpose: Information Stored With Union
 * Date: 19/2/19
***************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union employeeInfo
{
    char *name;
    char *phoneNumber;
    int age;
    float salary;
};

int main()
{
    
    union employeeInfo newEmployee;
    
    // The type of union data has memory for only one variable at a time, that's why we show the information after after being captured form the user
    strcpy(newEmployee.name, "Miguel O");
    printf("The new employee's name is: %s\n", newEmployee.name); 
    
    strcpy(newEmployee.phoneNumber, "66434");
    printf("The new employee's phone number is: %s\n", newEmployee.phoneNumber);
    
    newEmployee.age = 38;
    printf("The new employee's age is: %d\n", newEmployee.age);
    
    newEmployee.salary = 49999.7;
    printf("The new employee's salary is: %f\n", newEmployee.salary);
    
    printf("%d\n", sizeof(newEmployee));


    return 0;
}
