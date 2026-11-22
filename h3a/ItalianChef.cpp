#include <iostream>
#include <string>
#include "ItalianChef.h"
using namespace std;

ItalianChef::ItalianChef(string kokki) : Chef(kokki)
{
    cout << "Italian Chef " << name << " konstruktori" << endl;
}
string ItalianChef::getName()
{
    cout << "name of the Italian Chef is " << name << endl;
}
void ItalianChef::makePasta(){
    cout << "Italian Chef " << name << " makes pasta" << endl;
}
ItalianChef::~ItalianChef()
{
    cout << "Italian Chef " << name << " destruktori" << endl;
}
