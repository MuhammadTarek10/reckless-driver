#include "GameObject.h"
#include <iostream>

GameObject::GameObject(const std::string &name): m_Name(name){}

void GameObject::SetName(const std::string name){
    m_Name = name;
}

const std::string GameObject::GetName(){
    return m_Name;
}


void GameObject::onCollision(GameObject *pOther){
    std::cout << "Game" << std::endl;
}
