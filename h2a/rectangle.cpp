#include <iostream>
#include "rectangle.h"

void Rectangle::setWidth(double x)
{
    width = x;
}
void Rectangle::setHeight(double y)
{
    height = y;

}
double Rectangle::getArea()
{
    return width * height;
}
double Rectangle::getCircum()
{
    return (2 * (width + height));

}
