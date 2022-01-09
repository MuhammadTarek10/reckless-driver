#ifndef FIREHYDRANT_H
#define FIREHYDRANT_H
#include "SideObject.h"

class FireHydrant : public SideObject{
public:
    FireHydrant(int damage, const std::string &name);
    void onCollision(GameObject *pOther);
};


#endif
