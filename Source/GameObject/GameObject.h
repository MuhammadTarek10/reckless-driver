#ifndef _GAMEOBJECT_CPP_INCLUDED_
#define  _GAMEOBJECT_CPP_INCLUDED_
#include <string>
#include <iostream>

class GameObject{
private:
    std::string m_Name;
public:
    GameObject(const std::string &name);
    void SetName(const std::string name);
    const std::string GetName();
    virtual void onCollision(GameObject *pOther);
};

#include "GameObject.cpp"
#endif // GAMEOBJECT_H
