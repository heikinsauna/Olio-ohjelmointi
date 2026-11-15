#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
class Student
{
private:
    std::string name;
    int studentNumber;
    float average;
public:
    void setName(std::string n);
    void setStudentNumber(int st);
    void setAverage(double a);

    std::string getName();
    int getStudentNumber();
    double getAverage();


};

#endif // STUDENT_H
