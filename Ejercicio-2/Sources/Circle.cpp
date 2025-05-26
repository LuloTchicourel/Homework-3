#include "../Headers/Circle.hpp"

Circle::Circle(double radius, const Point& center) : r(radius), p(center) {
    // chequeo que el radio no sea negativo
    if (radius < 0)
        throw invalid_argument("Radius must be non-negative...");
}

double Circle::get_r() const {return r;}

void Circle::set_r(double radius){
    if (radius < 0)
        throw invalid_argument("Radius must be non-negative...");
    r = radius;
}

Point Circle::get_center() const {return p;}
void Circle::set_center(const Point& center) {p = center;}