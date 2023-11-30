#include "ipvalidation.h"

void lookUpAddress(Address *head)
{
    char findAlias[ALIAS_LENGTH];

    printf("Enter the alias: ");
    scanf("%s", findAlias);

    int start = 0;
    while (findAlias[start] == ' ') 
    {
        start++;
    }
    
    if (start > 0) 
    {
        strcpy(findAlias, findAlias + start);
    }

    int len = strlen(findAlias);
    
    while (len > 0 && findAlias[len - 1] == ' ') 
    {
        findAlias[len - 1] = '\0';
        len--;
    }

    Address *current = head;

    while (current != NULL)
    {
        if (strcasecmp(current->alias, findAlias) == 0)
        {
            printf("Alias: %s\n", current->alias);
            printf("IP Address: %d.%d.%d.%d\n", current->ip_add[0], current->ip_add[1], current->ip_add[2], current->ip_add[3]);
            return;
        }
        current = current->next;
    }

    printf("Alias '%s' not found in the list.\n", findAlias);
}
