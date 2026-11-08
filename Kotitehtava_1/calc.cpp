#include <iostream>
#include "calc.h"

int calc::calcSum(int num1, int num2) {
    int sum = num1 + num2;
    std::cout << "Summa: " << sum << std::endl;
    return 0;
}
float calc::calcDiv(float num1, float num2) {
    if (num2 == 0.0)
    {
        throw std::runtime_error("Jakaja ei voi olla nolla!");
    }
    float div = num1 / num2;
    std::cout << "Osamäärä: " << div << std::endl;
    return 0;
}
int calc::retSum(int num1, int num2) {
    return num1 + num2;
}
float calc::retDiv(float num1, float num2) {
    if (num2 == 0.0)
    {
        throw std::runtime_error("Jakaja ei voi olla nolla!");
    }
    return num1 / num2;
}
