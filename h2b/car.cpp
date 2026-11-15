#include <iostream>
#include "car.h"

Car::Car(std::string b, std::string m, int y)
{
    brand = b;
    model = m;
    yearModel = y;
}

void Car::printData()
{
    std::cout << "car brand: " << brand << std::endl;
    std::cout << "car model: " << model << std::endl;
    std::cout << "year: " << yearModel << std::endl;
}
