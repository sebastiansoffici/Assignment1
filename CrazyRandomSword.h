//SS15h
//Crazyrandomsword.h


#include <string>
#include <stdlib.h>
#include "Weapon.h"
#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoints = random(between 10 and 100), ignores r *andom amount of armor (0 to half armor)
 */
class CommonSpear : public Weapon {
public:

    CommonSpear() : Weapon("Crazy random sword", ((rand() % 91 + 10) * 1.0)) {
    }
    virtual ~CommonSpear() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */