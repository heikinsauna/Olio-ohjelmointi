#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    Chef chef1("Gordon Ramsay");
    //chef1.Chef("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    return 0;
}
