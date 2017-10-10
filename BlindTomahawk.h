#include <string>
#include "Weapon.h"
#include <ctime>
#include <stdlib.h>
#ifndef BLINDTOMAHAWK_H
#define BLINDTOMAHAWK_H

/**
 * Defines the behavior of a blind tomahawk (hitpoints = 50, ignores all armor, has a 10% of miss 
 * causing NO damage)
 */
class BlindTomahawk : public Weapon {
public:

    BlindTomahawk() : Weapon("Blind tomahawk", misshawk()) {
    }
    virtual ~BlindTomahawk() {}; 
    virtual double hit(double armor);
private:
	double misshawk()
	{
		srand(time(NULL));
		if (rand()%100 < 10)
			return 0;
		else
			return 50;
	}

};

#endif /* BLINDTOMAHAWK_H */

