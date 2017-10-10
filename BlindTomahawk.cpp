#include <stdlib.h>
#include "BlindTomahawk.h"

double BlindTomahawk::hit(double armor) 
{
	srand(time(NULL));
	double damage;
	if ((rand() % 100) < 10) //tomahawk is going to miss 
	{
        	damage = 0;
    	}
	else
		damage = hitPoints;
	return damage;
}
