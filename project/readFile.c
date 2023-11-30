#include "ipvalidation.h"

Address *readFile(Address *head)
{
    char line[30];

    FILE *file = fopen( FILENAME, "r");

    if (file == NULL)
    {
        printf("File not found\n");
        return head;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        Address data;
        int i, j = 0, index = 0;
        char ip_add[IP_LENGTH];

        for (i = 0; line[i] != '\0'; i++)
        {
            if (line[i] == '.' || line[i] == ' ')
            {
                ip_add[j] = '\0';
                data.ip_add[index++] = atoi(ip_add);

                j = 0;
                if (line[i] == ' ')
                    break;
            }
            else
                ip_add[j++] = line[i];
        }

        strncpy(data.alias, line + i + 1, 10);
        data.alias[ALIAS_LENGTH] = '\0';

        if (validateIPAddress(data.ip_add)) 
        {
            head = create_linked_list(head, data);
        } 
        
        else 
        {
            printf("Invalid IP address format: %s\n", line);
        }
    }

    fclose(file);
    return head;
}
