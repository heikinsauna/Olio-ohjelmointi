#include <iostream>
#include "car.h"
using namespace std;

int main()
{
    Car car1;
    car1.setBrand("Saab");
    car1.setModel("9-3");
    car1.setYearModel(2006);

    car1.printData();
    return 0;
}
