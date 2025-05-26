#include "../Headers/Point.hpp"

Point::Point(double x_val, double y_val) : x(x_val), y(y_val) {}

double Point::get_x() const {return x;}

void Point::set_x(double x_val) {x = x_val;}

double Point::get_y() const {return y;}

void Point::set_y(double y_val) {y = y_val;}


