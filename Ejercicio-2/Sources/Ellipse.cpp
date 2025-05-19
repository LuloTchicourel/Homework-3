#include "../Headers/Ellipse.hpp"
#include <stdexcept>
#include <algorithm>

Ellipse::Ellipse(double axis1, double axis2, const Point& center) : p(center) {
    // chequeo valores negativos de eje
    if (axis1 < 0 || axis2 < 0)
        throw invalid_argument("Semiaxis values must be non-negative...");
    // la consigna pide que el semieje mayor sea a, hago esto:
    a = max(axis1, axis2);
    b = min(axis1, axis2);
}

double Ellipse::get_a() const {return a;}

void Ellipse::set_a(double a_val){
    if (a_val < 0)
        throw invalid_argument("Semiaxis 'a' value must be non-negative...");
    // verifico que 'a' se mantenga como el semieje mayor
    if(a_val >= b) a = a_val;
    else {
        a = b;
        b = a_val;
    }
}

double Ellipse::get_b() const {return b;}

void Ellipse::set_b(double b_val){
    if (b_val < 0)
        throw invalid_argument("Semiaxis 'b' value must be non-negative...");
    // verifico que 'b' se mantenga como el semieje menor
    if(b_val <= a) b = b_val;
    else {
        b = a;
        a = b_val;
    }
}

Point Ellipse::get_center() const {return p;}
void Ellipse::set_center(const Point& center) {p = center;}