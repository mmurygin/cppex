#include "rational.h"

Rational::Rational(int numerator, int denominator)
    : numerator_(numerator), denominator_(denominator) {}

void Rational::add(Rational rational) {
    numerator_ = (numerator_ *  rational.denominator_  + rational.numerator_ * denominator_);
    denominator_ *= rational.denominator_;
}

void Rational::sub(Rational rational) {
    numerator_ = (numerator_ *  rational.denominator_  - rational.numerator_ * denominator_);
    denominator_ *= rational.denominator_;
}

void Rational::mul(Rational rational) {
    numerator_ *= rational.numerator_;
    denominator_ *= rational.denominator_;
}

void Rational::div(Rational rational) {
    numerator_ *= rational.denominator_;
    denominator_ *= rational.numerator_;
}

void Rational::neg() {
    numerator_ = -numerator_;
}

void Rational::inv() {
    int tmp = numerator_;
    numerator_ = denominator_;
    denominator_ = tmp;
}

double Rational::to_double() const {
    return (double) numerator_ / denominator_;
}

Rational & Rational::operator+=(Rational rational) {
    this->add(rational);

    return *this;
}

Rational & Rational::operator-=(Rational rational)
{
    this->sub(rational);

    return *this;
}

Rational & Rational::operator*=(Rational rational)
{
    this->mul(rational);

    return *this;
}

Rational & Rational::operator/=(Rational rational)
{
    this->div(rational);

    return *this;
}

Rational Rational::operator-() const
{
    Rational new_obj(numerator_, denominator_);
    new_obj.neg();

    return new_obj;
}

Rational Rational::operator+() const
{
    return *this;
}

Rational operator+(Rational lhs, Rational const &rhs) {
    return lhs+=rhs;
}

Rational operator-(Rational lhs, Rational const &rhs)
{
    return lhs -= rhs;
}

Rational operator*(Rational lhs, Rational const &rhs)
{
    return lhs *= rhs;
}

Rational operator/(Rational lhs, Rational const &rhs)
{
    return lhs /= rhs;
}

bool Rational::equal(Rational const & other) const {
    return (numerator_ * other.denominator_) == (other.numerator_ * denominator_);
}

bool Rational::more_than(Rational const &other) const
{
    return (numerator_ * other.denominator_) > (other.numerator_ * denominator_);
}

bool operator==(Rational const &lhs, Rational const &rhs) {
    return lhs.equal(rhs);
}

bool operator!=(Rational const &lhs, Rational const &rhs)
{
    return !(lhs == rhs);
}

bool operator>(Rational const &lhs, Rational const &rhs)
{
    return lhs.more_than(rhs);
}

bool operator<(Rational const &lhs, Rational const &rhs)
{
    return rhs.more_than(lhs);
}

bool operator>=(Rational const &lhs, Rational const &rhs)
{
    return !(lhs < rhs);
}

bool operator<=(Rational const &lhs, Rational const &rhs)
{
    return !(lhs > rhs);
}

Rational::operator double() const {
    return to_double();
}

