#pragma once
#include "Point.hpp"

class Circle {
private:
    double r;
    Point p;
public:
    Circle(double radius, const Point& point = Point(0.0f, 0.0f));

    double get_r() const;
    void set_r(double radius);
    Point get_center() const;
    void set_center(const Point& point);

    ~Circle() = default;
};