#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    std::vector<Car> carList;
    carList.push_back(Car("Saab", "9-3", 2007));
    carList.push_back(Car("Lada", "Niva", 2001));
    carList.push_back(Car("Opel", "Vectra", 1995));

    carList[1].printData();

    for(int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
    }
    return 0;
}
