/*
* File Name: Human.cpp
* Assignment: Lab 1 Exercise D
* Completed by: Malyeka & Hareem
* Submission Date: Sept 18, 2026
*/
#include "Human.h"
#include <iostream>

Human::Human(const std::string& name, double x, double y)
    : location(x, y), name(name)
{
}

const std::string& Human::get_name() const {
    return name;
}

void Human::set_name(const std::string& name) {
    this->name = name;
}

Point Human::get_point() const {
    return location;
}

void Human::display() const {
    std::cout << "Human Name: " << name << '\n'
              << "Human Location: "
              << location.get_x() << " , "
              << location.get_y() << ".\n"
              << std::endl;
}
