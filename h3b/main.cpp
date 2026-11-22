#include <iostream>
#include <memory>
#include <vector>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Bird.h"
using namespace std;

int main()
{
    unique_ptr<Dog> dog = make_unique<Dog>();
    dog->callOut();
    // Luodaan vektori Animal-olioita omistaville älyosoittimille
    vector<unique_ptr<Animal>> animals;

    // Luodaan eläinoliot ja siirretään niiden omistajuus vektoriin
    animals.push_back(make_unique<Dog>());
    animals.push_back(make_unique<Cat>());
    animals.push_back(make_unique<Bird>());

    for (const auto& animal : animals) {
        animal->callOut();  // Jokainen eläin toteuttaa oman luokkansa callOut-metodin
    }
    return 0;
}
