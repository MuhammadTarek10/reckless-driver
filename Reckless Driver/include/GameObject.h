#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>

class GameObject{
private:
    std::string m_Name;
public:
    GameObject(const std::string &name);
    void SetName(const std::string name);
    const std::string GetName();
    virtual void onCollision(GameObject *pOther);
};

#endif // GAMEOBJECT_H
