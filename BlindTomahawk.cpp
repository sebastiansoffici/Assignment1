#include <stdlib.h>
#include "BlindTomahawk.h"

double BlindTomahawk::hit(double armor) 
{
	int temp = rand() % 10 +  1;
	if (temp == 6) //tomahawk is going to miss 
	{
        	damage = 0;
    	}
	else
		damage = hitpoints;
	return damage;
}
