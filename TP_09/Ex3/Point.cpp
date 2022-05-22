#include <iostream>
#include "Point.h"

Point::Point() {
    this->x_ = 0;
    this->y_ = 0;
}
Point::Point(const int x, const int y) {
    this->x_ = x;
    this-> y_ = y;
}

int Point::get_x() const {return x_;}
int Point::get_y() const {return y_;}

void Point::show() const {std::cout << '(' << x_ << ' , ' << y_  << ')';}

