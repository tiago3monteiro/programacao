#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	int gcd(int a,int b);
	void normalise();
     
public:
	Fraction();
	Fraction(int num,int den);
	int numerator() const ;
	int denominator() const ;
	Fraction sum(const Fraction& right);
	Fraction sub(const Fraction& right);
	Fraction mul(const Fraction& right);
	Fraction div(const Fraction& right);
	void write() const;
};

Fraction::Fraction()
{
	this->numerator_ = 0;
	this->denominator_ = 1;
}

Fraction::Fraction(int num,int den)
{
	this->numerator_ = num;
	this->denominator_ = den;
	normalise();
}

int Fraction::denominator() const
{
	return this->denominator_;
}

int Fraction::numerator() const
{
	return this->numerator_;
}

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

// shows fraction on the screen
void Fraction::write() const {
  std::cout << numerator_ << '/' << denominator_;
}

Fraction Fraction::sum(const Fraction& right)
{
	int num = right.denominator()*numerator_ + right.numerator()*denominator_;
	int den = denominator_*right.denominator();
	return Fraction(num,den);
}

Fraction Fraction::sub(const Fraction& right)
{
	int num = right.denominator()*numerator_ - right.numerator()*denominator_;
	int den = denominator_*right.denominator();
	return Fraction(num,den);
}

Fraction Fraction::mul(const Fraction& right)
{
	int num = right.numerator()*numerator_;
	int den = right.denominator()*denominator_;
	return Fraction(num,den);
}

Fraction Fraction::div(const Fraction& right)
{
	int num = numerator_*right.denominator();
	int den = denominator_*right.numerator();
	return Fraction(num,den);
}