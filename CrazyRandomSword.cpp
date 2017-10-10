//SS15h
//crazyrandomspear.cpp

include "CrazyRandomSpear.h"

double CommonSpear::hit(double armor) 
{
	double temp = armor/2;
	int ignore = rand() % temp + 0;
	double damage = hitPoints - (armor - ignore);
	return damage;
}
