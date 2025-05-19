#pragma once
#include "Ellipse.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

template <typename T>
class FigureProcessor {
public:
    double calculate_area(const T&);
};

template <>
class FigureProcessor<Circle>{
public:
    double calculate_area(const Circle& c);
};

template <>
class FigureProcessor<Ellipse>{
public:
    double calculate_area(const Ellipse& e);
};

template <>
class FigureProcessor<Rectangle>{
public:
    double calculate_area(const Rectangle& r);
};