/*Author: Miguel Osuna
  Purpose: Pointer to String Structure
  Date: 2/1/19
*/

#include <stdio.h>
#include <stdlib.h>
#define SLEN 255

struct namect
{
    char *fname;
    char *lname;
    int letters;
};

void getInfo(struct namect *pst);

int main()
{
    struct namect *pst;
    getInfo(pst);
    
    return 0;
}

void getInfo(struct namect *pst)
{
    char temp[SLEN];
    printf("Please enter your first name.\n");
    gets(temp);
    
    //allocate memory to hold name, just the necessary
    pst->fname = (char *) malloc(strlen(temp) + 1);
    
    //copy name to allocated memory 
    strcpy(pst->fname, temp);
    
    printf("Please entre your last name\n");
    gets(temp);
    
    pst->lname = (char *) malloc(strlen(temp) + 1 );
    strcpy(pst->lname, temp);
    
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}