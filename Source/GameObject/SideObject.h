#ifndef SIDEOBJECT_H
#define SIDEOBJECT_H
#include "GameObject.h"

class SideObject:public GameObject{
private:
    int m_Damage;
public:
    SideObject(int damage, const std::string &name): m_Damage(damage), GameObject(name){};
    void SetDamage(int damage);
    int GetDamage();
};

#endif // SIDEOBJECT_H
