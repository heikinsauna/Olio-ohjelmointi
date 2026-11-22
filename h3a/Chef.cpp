#include <iostream>
#include <string>
#include "Chef.h"
using namespace std;


Chef::Chef(string kokki){
    name = kokki;
    cout << name << " konstruktori" << endl;

}
void Chef::makeSalad(){
    cout << name << " makes salad" << endl;
}
void Chef::makeSoup(){
    cout << name << " makes soup" << endl;
}
