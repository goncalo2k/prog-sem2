#include <iostream>
#include "Color.h"

using namespace std;

Color::Color(unsigned char red, unsigned char green, unsigned char blue) {
    this->r = red;
    this->g = green;
    this->b = blue;
}
Color::Color(const Color& b) {
    this->r = b.red();
    this->g = b.green();
    this->b = b.blue();
}

unsigned char Color::red() const {return r;}
unsigned char Color::green() const {return g;}
unsigned char Color::blue() const {return b;}

const Color Color::RED = Color(255,0,0);
const Color Color::GREEN = Color(0,255,0);
const Color Color::BLUE = Color(0,0,255);
const Color Color::BLACK = Color(0,0,0);
const Color Color::WHITE = Color(255,255,255);

bool Color::equal_to(const Color& other) const {
    if ((this->r == other.red()) && (this->g == other.green()) && (this->b == other.blue()))
    {
       return true;
    }
    return false;
}

void Color::invert() {
    this->r = 255 - this->r;
    this->g = 255 - this->g;
    this->b = 255 - this->b; 
}
