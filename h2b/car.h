#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;
public:

    Car(std::string b, std::string m, int y);

    void printData();

};
#endif // CAR_H
