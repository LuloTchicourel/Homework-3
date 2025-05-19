#pragma once
#include <iostream>

using namespace std;

class Point {
private:
    double x;
    double y;
public:
    Point(double x_val, double y_val);

    double get_x() const;
    void set_x(double x_val);
    double get_y() const;
    void set_y(double y_val);

    ~Point() = default;
};