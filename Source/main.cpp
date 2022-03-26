#include <iostream>
#include "Car/Car.h"
#include "GameObject/SideObject.h"
#include "GameObject/FireHydrant.h"


int main(void){
    Car car("Manufacturer", 25, 1223);
    car.Dashboard();
    car.Accelerate();
    car.Dashboard();
    car.SwitchOn();
    car.Accelerate();
    car.Dashboard();
    car.Accelerate();
    car.Dashboard();
    car.FillFuel(44);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Dashboard();
    car.Brake();
    car.Dashboard();
    return 0;
}
