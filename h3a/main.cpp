#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();
    ItalianChef ichef1("Antony Borday");
    ichef1.makeSalad();
    ichef1.makeSoup();
    ichef1.makePasta();

    return 0;
}
