#include <iostream>
#include "Polygon.h"
#include "Point.h"

Polygon::Polygon() {
    this->x_ = 0;
    this->y_ = 0;
}
Polygon::Polygon(const int x, const int y) {
    this->x_ = x;
    this-> y_ = y;
}