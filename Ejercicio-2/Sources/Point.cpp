#include "../Headers/Point.hpp"

Point::Point(double x_val, double y_val) : x(x_val), y(y_val) {
    // chequeo que los valores de la coordenada sean positivos
    if (x_val < 0 || y_val < 0)
        throw invalid_argument("Coordinate values must be non-negative...");
}

double Point::get_x() const {return x;}

void Point::set_x(double x_val){
    if (x_val < 0)
        throw invalid_argument("'x' value must be non-negative...");
    x = x_val;
}

double Point::get_y() const {return y;}

void Point::set_y(double y_val){
    if (y_val < 0)
        throw invalid_argument("'y' value must be non-negative...");
    y = y_val;
}


