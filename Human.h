/*
* File Name: Human.h
* Assignment: Lab 1 Exercise D
* Completed by: Malyeka & Hareem
* Submission Date: Sept 18, 2026
*/
#ifndef HUMAN_Header
#define HUMAN_Header

#include <string>
#include "Point.h"

class Human {
private:
    Point location;
    std::string name;

public:
    Human(const std::string& name = "",
          double x = 0.0,
          double y = 0.0);

    const std::string& get_name() const;
    void set_name(const std::string& name);

    Point get_point() const;

    void display() const;
};

#endif
