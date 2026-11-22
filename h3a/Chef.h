#ifndef CHEF_H
#define CHEF_H
#include <string>
class Chef
{
private:

protected:
    std::string name;
public:
    Chef(std::string);
    void makeSalad();
    void makeSoup();
    ~Chef();
};

#endif // CHEF_H
