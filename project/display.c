#include "ipvalidation.h"

void display(Address *head)
{
    Address *current = head;

    while (current != NULL)
    {
        printf("IP: %d.%d.%d.%d\n", current->ip_add[0], current->ip_add[1], current->ip_add[2], current->ip_add[3]);
        printf("Alias: %s\n", current->alias);
        printf("\n");

        current = current->next;
    }
}
