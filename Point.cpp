/*
* File Name: Point.cpp
* Assignment: Lab 1 Exercise D
* Completed by: Malyeka & Hareem
* Submission Date: Sept 18, 2026
*/
#include "Point.h"

Point::Point(double a, double b)
    : x(a), y(b)
{
}

double Point::get_x() const {
    return x;
}

double Point::get_y() const {
    return y;
}

void Point::set_x(double x) {
    this->x = x;
}

void Point::set_y(double y) {
    this->y = y;
}
 