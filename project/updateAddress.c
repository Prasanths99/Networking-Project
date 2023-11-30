#include "ipvalidation.h"

void updateAddress(Address *head)
{
    char findAlias[ALIAS_LENGTH];

    printf("Enter the alias to update: ");
    scanf("%s", findAlias);
    
    if (isAliasValid(findAlias) == 0) 
    {
        printf("Alias is too long\n");
        return;
    }

    Address *current = head;

    while (current != NULL)
    {
        if (strcmp(current->alias, findAlias) == 0)
        {
            printf("Enter the updated IP address: ");
            int updatedIP[IP_LENGTH];
            scanf("%d.%d.%d.%d", &updatedIP[0], &updatedIP[1], &updatedIP[2], &updatedIP[3]);

            if (validateIPAddress(updatedIP)) 
            {
                current->ip_add[0] = updatedIP[0];
                current->ip_add[1] = updatedIP[1];
                current->ip_add[2] = updatedIP[2];
                current->ip_add[3] = updatedIP[3];

                printf("Address updated successfully.\n");
            } 
            
            else 
            {
                printf("Invalid IP address format. Update failed.\n");
            }
            return;
        }
        current = current->next;
    }

    printf("Alias '%s' not found in the list. Update failed.\n", findAlias);
}
