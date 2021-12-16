#ifndef FIREHYDRANT_H
#define FIREHYDRANT_H
#include <SideObject.h>

class FireHydrant:public SideObject{
public:
    FireHydrant(int damage, const std::string &name):SideObject(damage, name){};
    void onCollision(GameObject *pOther){
        std::cout << "Fire" << std::endl;
    };
};

#endif // FIREHYDRANT_H
