#include <string>
#include "Weapon.h"

#ifndef BLINDTOMAHAWK_H
#define BLINDTOMAHAWK_H

/**
 * Defines the behavior of a blind tomahawk (hitpoints = 50, ignores all armor, has a 10% of miss 
 * causing NO damage)
 */
class BlindTomahawk : public Weapon {
public:

    BlindTomahawk() : Weapon("Blind tomahawk", 50) {
    }
    virtual ~BlindTomahawk() {}; 
    virtual double hit(double armor);

};

#endif /* BLINDTOMAHAWK_H */

