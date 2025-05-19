#pragma once
#include "Point.hpp"

class Ellipse {
private:
    double a;
    double b;
    Point p;
public:
    Ellipse(double a_val, double b_val, const Point& point = Point(0.0f, 0.0f));

    double get_a() const;
    void set_a(double a_val);
    double get_b() const;
    void set_b(double b_val);
    Point get_center() const;
    void set_center(const Point& point);

    ~Ellipse() = default;
};