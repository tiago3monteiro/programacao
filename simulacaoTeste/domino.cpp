#include <iostream>
#include "Piece.h"
#include "Domino.h"
#include <vector>

using namespace std;

bool Piece::can_be_left_to(const Piece& other) const
{
    return(other.get_left() == this->right_);
    
}
bool Piece::can_be_right_to(const Piece& other) const
{
    return(other.get_right() == this->left_);

}

const Piece& Domino::left() const
{
    return *(this->pieces_.begin());
}

const Piece& Domino::right() const
{
    return *(this->pieces_.rbegin());
}

bool Domino::place_left(const Piece& p)
{
    if(p.can_be_left_to(this->left()))
    {
        this->pieces_.push_front(p);
        return true;
    }
    return false;

}  
bool Domino::place_right(const Piece& p)
{
    if(p.can_be_right_to(this->right()))
    {
        this->pieces_.push_back(p);
        return true;
    }
    return false;
}

