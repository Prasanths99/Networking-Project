#include "ipvalidation.h"

void saveToFile(Address *head)
{
    FILE *file = fopen( FILENAME, "w"); 

    if (file == NULL)
    {
        printf("Failed to open file for saving.\n");
        return;
    }

    Address *current = head;

    while (current != NULL)
    {
        fprintf(file, "%d.%d.%d.%d %s\n", current->ip_add[0], current->ip_add[1], current->ip_add[2], current->ip_add[3], current->alias);
        current = current->next;
    }

    fclose(file);
    printf("Data saved to CS531_Inet.txt successfully.\n");
}
