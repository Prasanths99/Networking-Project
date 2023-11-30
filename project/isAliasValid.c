#include "ipvalidation.h"

int isAliasValid(char *alias) 
{
    if (strlen(alias) <= ALIAS_LENGTH) 
    {
        return 1;
    } 
    
    else 
    {
        return 0;
    }
}
