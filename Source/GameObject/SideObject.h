#ifndef _SIDEOBJECT_CPP_INCLUDED_
#define _SIDEOBJECT_CPP_INCLUDED_
#include "GameObject.h"

class SideObject:public GameObject{
private:
    int m_Damage;
public:
    SideObject(int damage, const std::string &name);
    void SetDamage(int damage);
    int GetDamage();
};


#include "SideObject.cpp"
#endif