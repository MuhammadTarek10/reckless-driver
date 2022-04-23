#ifndef _FIREHYDRANT_CPP_INCLUDED_
#define  _FIREHYDRANT_CPP_INCLUDED_

class FireHydrant : public SideObject{
public:
    FireHydrant(int damage, const std::string &name);
    void onCollision(GameObject *pOther);
};

#include "FireHydrant.cpp"
#endif