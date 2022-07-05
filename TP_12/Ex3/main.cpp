#include <iostream>
#include <iomanip>
#include "Piece.h"
#include "Domino.h"


bool Piece::can_be_left_to(const Piece& other) const {if(other.get_left() == right_) {return true;} else {return false;}}

bool Piece::can_be_right_to(const Piece& other) const {if(other.get_right() == left_) {return true;} else {return false;}}

const Piece& Domino::left() const {return pieces_.front();}

const Piece& Domino::right() const {return pieces_.back();}

bool Domino::place_left(const Piece& p) 
{
    if (pieces_.front().can_be_right_to(p)) 
    {
        pieces_.push_front(p);
        return true;
    } else {return false;}
}

bool Domino::place_right(const Piece& p) 
{
    if (pieces_.back().can_be_left_to(p))
    {
        pieces_.push_back(p);
        return true;
    }
    else {return false;}
}


int main() 
{	
    Domino d( { {1,2}, {2,0}, {0,6}, {6,6} } );
    cout << d.left().to_string() << ' ' << d.right().to_string() << ' ' << d.to_string() << '\n';
    return 0;
}