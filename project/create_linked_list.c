#include "ipvalidation.h"

Address *create_linked_list(Address *head, Address data)
{
    Address *newNode = (Address *)malloc(sizeof(Address));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }
    
    if (isAliasValid(data.alias) == 0) 
    {
        printf("Alias is too long\n");
        free(newNode);
        return head;
    }

    newNode->ip_add[0] = data.ip_add[0];
    newNode->ip_add[1] = data.ip_add[1];
    newNode->ip_add[2] = data.ip_add[2];
    newNode->ip_add[3] = data.ip_add[3];

    strncpy(newNode->alias, data.alias, 10);
    newNode->alias[ALIAS_LENGTH] = '\0';

    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Address *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    return head;
}
