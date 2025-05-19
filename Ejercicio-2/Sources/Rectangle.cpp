#include "../Headers/Rectangle.hpp"

Rectangle::Rectangle(const Point& vertex, double width, double height) : 
    w(width), h(height), blv(vertex) {
    // chequeo valores negativos del tamaño
    if (width < 0 || height < 0)
        throw invalid_argument("Size values must be non-negative...");
}

Point Rectangle::get_blv() const {return blv;}
void Rectangle::set_blv(const Point& blv_val) {blv = blv_val;}
double Rectangle::get_width() const {return w;}

void Rectangle::set_width(double width) {
    if (width < 0)
        throw invalid_argument("Width value must be non-negative...");
    w = width;
}

double Rectangle::get_height() const {return h;}

void Rectangle::set_height(double height){
    if (height < 0)
        throw invalid_argument("Height value must be non-negative...");
    h = height;
}