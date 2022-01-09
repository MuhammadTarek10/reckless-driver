#include "SideObject.h"

SideObject::SideObject(int damage, const std::string &name):m_Damage(damage), GameObject(name){}

void SideObject::SetDamage(int damage){
    m_Damage = damage;
}

int SideObject::GetDamage(){
    return m_Damage;
}
