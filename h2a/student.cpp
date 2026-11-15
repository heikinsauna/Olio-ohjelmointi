#include <iostream>

#include "student.h"

void Student::setName(std::string n)
{
    name = n;
}
void Student::setStudentNumber(int st)
{
    studentNumber = st;
}
void Student::setAverage(double a)
{
    average = a;
}
std::string Student::getName()
{
    return name;
}
int Student::getStudentNumber()
{
    return studentNumber;
}
double Student::getAverage()
{
    return average;
}
