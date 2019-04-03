/*************************************
 * Author: Miguel Osuna
 * Purpose: String Handling Functions using Pointers
 * Date: 19/2/19
*************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *webPage;
    char *city;
    char *address;
    int employees;
    
} company;

void fillCompany(company *newCompany);
void printCompany(company *newCompany);

int main()
{
    company newCompany;
    company *companyPtr = NULL;
    companyPtr = &newCompany;
    
    fillCompany(companyPtr);
    printCompany(companyPtr);
    
    return 0;
}

void fillCompany(company *newCompany)
{
    char temp[255];
    
    //For webPage member: We need to allocate the correct amount of memory!!!
    printf("Enter your webpage: ");
    gets(temp);
    (*newCompany).webPage = (char *) malloc(sizeof(temp) + 1);
    strcpy((*newCompany).webPage, temp);
    
    //For city member: We need to allocate the correct amount of memory!!!
    printf("Enter your city: ");
    gets(temp);
    (*newCompany).city = (char *) malloc(sizeof(temp) + 1);
    strcpy((*newCompany).city, temp);
    
    //For address member: We need to allocate the correct amount of memory!!!
    printf("Enter your address: ");
    gets(temp);
    (*newCompany).address = (char *) malloc(sizeof(temp) + 1);
    strcpy((*newCompany).address, temp);
    
    printf("Enter the Number of Employees: ");
    scanf("%d", &(*newCompany).employees);

    return;
}

void printCompany(company *newCompany)
{
    printf("\nWebpage: %s\n", newCompany->webPage);
    printf("City: %s\n", newCompany->city);
    printf("Address: %s\n", newCompany->address);
    printf("No. Employees: %d\n", newCompany->employees);
    
    return;    
}
