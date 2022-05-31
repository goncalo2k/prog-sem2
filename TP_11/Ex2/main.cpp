#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <math.h>
#include <iomanip>
#include "Shape.h"

using namespace std;

class Circle : public Shape 
{
    public:
    Circle(const point& center, const double radius) : Shape(center) {radius_ = radius;}
    double area() const {return M_PI * radius_ * radius_;}
    double perimeter() const {return 2 * M_PI * radius_;}
    bool contains(const point& p) const 
    {
        double distance = sqrt(pow(p.x - Shape::get_center().x , 2) + pow(p.y - Shape::get_center().y , 2));
        if (distance > radius_) return false;
        return true;
    }
    private:
    double radius_;
};

class Rectangle : public Shape 
{
    public:
    Rectangle(const point& center, const double width, const double height) : Shape(center) {width_ = width; height_ = height;}
    double area() const {return width_ * height_;}
    double perimeter() const {return 2*width_ + 2*height_;}
    bool contains(const point& p) const 
    {
        if ((x >= Shape::get_center().x - width_/2 && x <= Shape::get_center().x + width_/2) && (y >= Shape::get_center().y - height_/2 && y <= Shape::get_center().y + height_/2) )
    }
    private:
    double width_;
    double height_;
};

int main() {
    const Shape& s1 = Circle({1, 2}, 3);
    const Shape& s2 = Rectangle({4, 5}, 6, 7);
    cout << fixed << setprecision(2) << boolalpha
     << s1.area() << ' ' << s1.perimeter() << ' '
     << s1.contains({1, 2}) << ' ' << s1.contains({ 4, 5 }) << ' '
     << s2.area() << ' ' << s2.perimeter() <<  ' '
     << s2.contains({1, 2}) << ' ' << s2.contains({ 4, 5 }) << '\n';
     return 0;}