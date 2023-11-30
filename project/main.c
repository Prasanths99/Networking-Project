#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ipvalidation.h"

int main()
{
    Address *head = NULL;
    int choice;
    char choiceStr[10];

    while (1)
    {
        printf("Choose from the following menu:\n");
        printf("1. Add Address\n");
        printf("2. Look up address\n");
        printf("3. Update address\n");
        printf("4. Delete address\n");
        printf("5. Display list\n");
        printf("6. Display aliases\n");
        printf("7. Save\n");
        printf("8. Quit\n");
        scanf("%s", choiceStr);

        if(validateInput(choiceStr))
		{
			choice = atoi(choiceStr);
			
			switch (choice)
			{
			case 1:
				head = readFile(head);
				break;
			case 2:
				lookUpAddress(head);
				break;
			case 3:
				updateAddress(head);
				break;
			case 4:
				deleteAddress(head);
				break;
			case 5:
				display(head);
				break;
			case 6:
				displayAliases(head);
				break;
			case 7:
				saveToFile(head);
				break;
			case 8:
				return 0;
			default:
				printf("Invalid choice, Please try again\n");
			}
		}
		
		else
		{
			printf("Invalid choice, Please enter between 1 to 8 only.\n");
		}
    }

    return 0;
}
