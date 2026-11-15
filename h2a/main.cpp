#include <iostream>
#include "car.h"
#include "rectangle.h"
using namespace std;

int main()
{

    Car car1;
    car1.setBrand("Saab");
    car1.setModel("9-3");
    car1.setYearModel(2006);

    car1.printData();

    Rectangle nelio;
    nelio.setWidth(4);
    nelio.setHeight(3);
    double area = nelio.getArea();
    double circum = nelio.getCircum();
    std::cout << "Rectangle Area: " << area << std::endl;
    std::cout << "Rectangle circcum: " << circum << std::endl;

    return 0;
}
