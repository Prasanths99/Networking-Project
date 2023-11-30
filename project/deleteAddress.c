#include "ipvalidation.h"

void deleteAddress(Address *head)
{
    char findAlias[ALIAS_LENGTH];

    printf("Enter the alias to delete: ");
    scanf("%s", findAlias);

    Address *current = head;
    Address *prev = NULL;

    while (current != NULL)
    {
        if (strcmp(current->alias, findAlias) == 0)
        {
            if (prev == NULL)
            {
                
                head = current->next;
            }
            else
            {
                prev->next = current->next;
            }

            free(current);
            printf("Alias '%s' deleted successfully.\n", findAlias);
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("Alias '%s' not found in the list. Deletion failed.\n", findAlias);
}
