/*
* File Name: Point.h
* Assignment: Lab 1 Exercise D
* Completed by: Malyeka & Hareem
* Submission Date: Sept 18, 2026
*/
#ifndef POINT_Header
#define POINT_Header

class Point {
private:
    double x;
    double y;

public:
    Point(double x = 0.0, double y = 0.0);

    double get_x() const;
    double get_y() const;

    void set_x(double x);
    void set_y(double y);
};

#endif
