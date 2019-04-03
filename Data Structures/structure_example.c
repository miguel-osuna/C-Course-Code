/*Author: Miguel Osuna
  Purpose: Simple Structure Example
  Date: 1/30/19
*/

#include <stdio.h>
#include <string.h>

struct characteristics
{
    int age;
    float height;
    float weight;
    char sex[6];
};

int main()
{

    struct characteristics mySelf = {.sex = "male", .age = 100, .height = 1.29, .weight = 99};
    
    printf("My age is: %d years old\n", mySelf.age);
    printf("My height is: %.2f meters\n", mySelf.height);
    printf("My weight is: %.2f kilograms\n", mySelf.weight);
    printf("My sex is: %s\n\n", mySelf.sex);

    struct characteristics testSubjects[5] = { 
                                              {21, 1.76, 75.34, {'m', 'a', 'l', 'e'} },
                                              {36, 2.1, 93.87, {'f', 'e', 'm', 'a', 'l', 'e'} }, 
                                              {54, 1.65, 64.23, {'f', 'e', 'm', 'a', 'l', 'e'} },
                                              {18, 1.83, 81.39, {'m', 'a', 'l', 'e'} }, 
                                              {0, 0, 0, {'f', 'e', 'm', 'a', 'l', 'e'} }
                                             }; 
                                            
    testSubjects[4].age = 26;
    testSubjects[4].height = 1.55;
    testSubjects[4].weight = 45;
    testSubjects[4].sex[0] = 'm';
    testSubjects[4].sex[1] = 'a';
    testSubjects[4].sex[2] = 'l';
    testSubjects[4].sex[3] = 'e';
    testSubjects[4].sex[4] = ' ';
    testSubjects[4].sex[5] = ' ';
    
    for(int i = 0; i < 5; i++)
    {
        printf("For Test Subject #%d\n", i+1);
        printf("Age is: %d\n", testSubjects[i].age);
        printf("Height is: %f meters\n", testSubjects[i].height);
        printf("Weigth is: %f kilograms\n", testSubjects[i].weight);
        printf("Sex is: %s\n\n", testSubjects[i].sex);
    }

    return 0;
}


