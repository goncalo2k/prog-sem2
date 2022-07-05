#include <iostream>
#include <cmath>

using namespace std;

class Fraction
{
    public:
    //! constructors
    Fraction() {numer_= 0; denom_ = 1;}
    Fraction(int a, int b) {numer_ = a; denom_ = b; this.normalise();}

    //! accessors
    int numerator() {return numer_;}
    int denominator() {return denom_;}
    
    Fraction sum(const Fraction& right)
    {
        
    }

    Fraction sub(const Fraction& right)
    {

    }

    Fraction mul(const Fraction& right) 
    {

    }

    Fraction div(const Fraction& right)
    {

    }

    int gcd(int a, int b);
    void normalise();
    void write();

    private:
    int numer_, denom_;

}//! define the Fraction class.


//! Compute the gcd of two numbers.
int Fraction::gcd(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}

//! Normalize a fraction.
void Fraction::normalise() {
  int g = gcd(numerator_, denominator_);
  numerator_ /= g;
  denominator_ /= g;
  if (denominator_ < 0) {
    numerator_ = - numerator_;
    denominator_ = - denominator_;
  }
}

// shows fraction f on the screen
void Fraction::write() const {
  cout << numerator() << '/' << denominator();
}
