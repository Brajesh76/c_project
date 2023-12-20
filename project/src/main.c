#include<stdio.h>
#include "consumer.h"
#include<string.h>
#define MAX_NAME_LENGTH 45
int main()
{
    
    consumer c;
 

    printf("\n\n******  ELECTRICITY BILL APP  ******\n\n");
    printf("Enter consumer name: ");
    scanf(" %[^\n]", c.name);
    while (strlen(c.name) > MAX_NAME_LENGTH) {
        printf("Name is too long. Please enter a name with at most %d characters: ", MAX_NAME_LENGTH);
        scanf(" %[^\n]", c.name);
    }
 
    printf("Enter units consumed: ");
    scanf("%d", &c.units);
    while (c.units < 0)
    {
        printf("\n\nError: Units consumed cannot be negative. Please try again.\n");
        printf("Enter units consumed: ");
        scanf("%d", &c.units);
    }
 
 
    show(&c);
 
    return 0;
}
