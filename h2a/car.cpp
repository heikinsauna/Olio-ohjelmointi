#include <iostream>
#include "car.h"

void Car::setBrand(std::string b)
{
    brand = b;
}
void Car::setModel(std::string m)
{
    model = m;

}
void Car::setYearModel(int y)
{
    yearModel = y;
}
void Car::printData()
{
    std::cout << "car brand: " << brand << std::endl;
    std::cout << "car model: " << model << std::endl;
    std::cout << "year: " << yearModel << std::endl;
}
