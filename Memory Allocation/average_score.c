/*************************************
 * Author: Miguel Osuna
 * Purpose: Average Score of Students
 * Date: 15/2/19
*************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float average = 0.0;
    int i = 0, students;
    int *scorePtr = NULL;
    
    printf("Please enter the number of students: ");
    scanf("%d", &students);
    
    scorePtr = (int *) calloc(students, sizeof(int));
    
    while(i < students)
    {
        printf("Enter student #%d score: ", i+1);
        scanf("%d", &*(scorePtr + i));
        average += *(scorePtr + i) / students; 
        i++;
    }
    
    free(scorePtr);
    printf("The average score of the students is: %.2f", average);
    
    return 0;
}