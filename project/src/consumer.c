#include <stdio.h>
#include <errno.h>
#include "consumer.h"

#ifndef RENTAL 
#define RENTAL 250 
#endif
 
#ifndef RATE
#define RATE 4 
#endif
 
#ifndef SUBSIDY
#define SUBSIDY 150 
#endif
 


 
void show(consumer *c)
{
 
    c->bill = RENTAL + RATE * c->units;
 
    if (c->units < 100)
    {
        c->subsidy = SUBSIDY;
        c->bill = c->bill - c->subsidy; 
    }
    else
    {
        c->subsidy = 0;
    }
 
 
    printf("\n\n **** BILL GENERATED ****");
    printf("\n---------------------------------");
    printf("\nConsumer Name:      %s", c->name);
    printf("\nUnits consumed:     %d\n", c->units);
    printf("Subsidy (if any):   Rs. %.2f\n", c->subsidy);
    printf("Total Bill Amount:  Rs. %.2f\n", c->bill);
    printf("---------------------------------");
}