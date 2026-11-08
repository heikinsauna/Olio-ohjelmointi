#include <iostream>
#include "calc.h"

int main()
{
    float a;
    float b;
    calc calc;

    try {
        std::cout << "Anna ensimmäinen luku: " << std::endl;
        std::cin >> a;
        std::cout << "Anna toinen luku: " << std::endl;
        std::cin >> b;
        calc.calcSum(a,b);
        calc.calcDiv(a, b);
        int sum1 = calc.retSum(a, b);
        std::cout << a << "+" << b << " = " << sum1 << std::endl;
        float result = calc.retDiv(a, b);
        std::cout << a << "/" <<  b << " = " << result << std::endl;

    } catch (std::runtime_error& e) {
        std::cout <<"Error: "<< e.what()<< std::endl;
    }

    return 0;
}
