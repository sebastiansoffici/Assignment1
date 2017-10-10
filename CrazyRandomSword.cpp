//SS15h
//crazyrandomsword.cpp

#include "CrazyRandomSword.h"


CrazyRandomSword::CrazyRandomSword() : Weapon("Crazy random sword", ((rand()%91 + 10) * 1.0))
{
	srand(time(NULL));
}
double CrazyRandomSword::hit(double armor) 
{
	int temp = armor/2;
	int ignore = rand() % temp + 0;
	double damage = hitPoints - (armor - ignore);
	return damage;
}
