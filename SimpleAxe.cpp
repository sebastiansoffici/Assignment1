//ss15h
//SimpleAxe.cpp


#include "SimpleAxe.h"

double CommonSpear::hit(double armor) 
{
	if (armor > 0 && armor < 20)
		armor = 0;
    
	double damage = hitPoints - armor;
	return damage;
}
