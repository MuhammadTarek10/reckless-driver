
Car::Car(const std::string manu, float fuel, int reg):manufacturer(manu), registerationNum(reg){
	this->fuel = fuel;
	speed = 0;
	isRunning = false;
}

void Car::SwitchOn(){
	isRunning = true;
}

void Car::SwitchOff(){
	isRunning = false;
}

void Car::Accelerate(){
	if(!isRunning)
		return;
	++speed;
	fuel -= 1.5f;

}

void Car::Brake(){
	speed = 0;
}

void Car::Dashboard(){
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "Fuel: " << fuel << std::endl;
}

void Car::FillFuel(float amount){
    fuel += amount;
}

float Car::GetFuel(){
    return fuel;
}

float Car::GetSpeed(){
    return speed;
}
