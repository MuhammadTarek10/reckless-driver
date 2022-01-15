#include <iostream>
#include "FireHydrant.h"

FireHydrant::FireHydrant(int damage, const std::string &name):SideObject(damage, name){}

void FireHydrant::onCollision(GameObject *pOther){
    std::cout << "Fire" << std::endl;
}