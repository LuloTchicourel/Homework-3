#pragma once
#include "Ellipse.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

constexpr double PI = 3.141592653589793;

template <typename T>
class FigureProcessor {
public:
    double calculate_area(const T&){
        cerr << "Cannot calculate area of an invalid figure..." << endl;
        return 0.0f;
    }
};

template <>
class FigureProcessor<Circle>{
public:
    double calculate_area(const Circle& c){
        double r = c.get_r();
        return PI * r * r;
    }
};

template <>
class FigureProcessor<Ellipse>{
public:
    double calculate_area(const Ellipse& e){
        double a = e.get_a();
        double b = e.get_b();
        return PI * a * b;
    }
};

template <>
class FigureProcessor<Rectangle>{
public:
    double calculate_area(const Rectangle& r){
        return r.get_height() * r.get_width();
    }
};