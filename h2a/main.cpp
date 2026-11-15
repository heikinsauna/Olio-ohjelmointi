#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

int main()
{

    Car car1;
    car1.setBrand("Saab");
    car1.setModel("9-3");
    car1.setYearModel(2006);

    car1.printData();

    Rectangle* nelio = new Rectangle();
    nelio->setWidth(4);
    nelio->setHeight(3);
    double area = nelio->getArea();
    double circum = nelio->getCircum();
    std::cout << "Rectangle Area: " << area << std::endl;
    std::cout << "Rectangle circcum: " << circum << std::endl;
    delete nelio;
    std::unique_ptr<Student> student = std::make_unique<Student>();
    student->setName("Johannes");
    student->setStudentNumber(1444);
    student->setAverage(4.12);
    std::cout << "Student name: " << student->getName() << std::endl;
    std::cout << "Student number: " << student->getStudentNumber() << std::endl;
    std::cout << "Student average: " << student->getAverage() << std::endl;




    return 0;
}
