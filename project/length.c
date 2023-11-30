#include "ipvalidation.h"

int length(Address *head)
{
    int count = 0;
    Address *current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}
