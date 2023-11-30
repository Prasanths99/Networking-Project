#include "ipvalidation.h"

void displayAliases(Address *head)
{
   
    Address *current = head;

    while (current != NULL)
    {
        printf("Alias: %s\n", current->alias);
        current = current->next;
    }
}
