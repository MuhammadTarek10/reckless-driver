#include <iostream>
#include "Car.h"
#include "GameObject.h"
#include "SideObject.h"
#include "FireHydrant.h"

int main()
{
    FireHydrant f(50, "S");
    f.SetName("Hydrant");
    f.SetDamage(100);
    return 0;
}
