#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "Chef.h"
class ItalianChef : public Chef
{
public:
    ItalianChef(std::string);
    std::string getName();
    void makePasta();
    ~ItalianChef();
};

#endif // ITALIANCHEF_H
