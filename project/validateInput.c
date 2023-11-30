#include "ipvalidation.h"

int validateInput(char *input) 
{
    for (int i = 0; input[i] != '\0'; i++) 
	{
        if (input[i] < '0' || input[i] > '9') 
		{
            return 0;
        }
    }
    return 1;
}
