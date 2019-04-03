/*******************************************************
    Author: Miguel Osuna
    Purpose: Structure Pointers and Functions (Challenge)
    Date: 1/2/19
*******************************************************/

#include <stdio.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *itemPtr);
void printItem(struct item *itemPtr);

int main() //Create a variable and pointer of type struct item.
{
    struct item newItem, *itemPtr;
    itemPtr = &newItem;
    
    itemPtr->itemName = (struct item *) malloc (sizeof(struct item)); //Allocate memory for the pointer always in the main
    
    if(!itemPtr) //Check for NULL character
        exit(-1); //-1 indicates an error in the program
    
    readItem(itemPtr);
    printItem(itemPtr);
    
    free(itemPtr->itemName); //We just free the memory that was allocated, not the entire structure
    return 0;
}

void readItem(struct item *itemPtr) //Read input from the user to define and store it in the type structure variable.
{
    printf("Please enter your new item: ");
    scanf("%s", itemPtr->itemName);
    
    printf("Please enter your quantity: ");
    scanf("%d", &(itemPtr->quantity));
    
    printf("Please enter the price of the item in dollars: ");
    scanf("%f", &(itemPtr->price));
    printf("\n");
    
    return;
}

void printItem(struct item *itemPtr) //Gets a pointer to a type struct item variable and prints out the contents.
{
    printf("The item's name is: %s\n", itemPtr->itemName);
    printf("The number of items is: %d\n", itemPtr->quantity);
    printf("The item's price is: %.2f dollars\n", itemPtr->price);
    printf("The amount per all items is: %.2f dollars\n", (itemPtr->quantity) * (itemPtr->price) );

    return; 
}
