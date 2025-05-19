#pragma once
#include "Point.hpp"

class Rectangle {
private:
    Point blv; // lbv = bottom left vertex
    double w;
    double h;
public:
    Rectangle(const Point& blv_val, double width, double height);

    Point get_blv() const;
    void set_blv(const Point& blv_val);
    double get_width() const;
    void set_width(double width);
    double get_height() const;
    void set_height(double height);

    ~Rectangle() = default;
};