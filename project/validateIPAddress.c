#include "ipvalidation.h"

int validateIPAddress(int ip_add[IP_LENGTH]) 
{
    for (int i = 0; i < 4; i++) 
	{
	
		if (ip_add[i] < 0 || ip_add[i] > 255) 
		{
		    return 0;
		}

		int quartet = ip_add[i];
		int digitCount = 0;
		while (quartet > 0) 
			{
		    quartet /= 10;
		    digitCount++;
		}

		if (digitCount > 3) 
			{
		    return 0;
        }
    }
    return 1;
}
