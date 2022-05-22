#ifndef _COLOR
#define _COLOR

class Color {
  public:
    // constructors
    Color(unsigned char red, unsigned char green, unsigned char blue);
    Color(const Color& b);
    // accessors
    unsigned char red() const;
    unsigned char green() const;
    unsigned char blue() const;

    static const Color RED, GREEN, BLUE, BLACK, WHITE;

    bool equal_to(const Color& other) const;
    
    void invert();

  private:
    unsigned char r, g, b;
    // compute the number of days of month/year, for internal use only
};

#endif