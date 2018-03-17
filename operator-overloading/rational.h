#pragma once

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    Rational & operator+=(Rational rational);
    Rational & operator-=(Rational rational);
    Rational & operator*=(Rational rational);
    Rational & operator/=(Rational rational);

    operator double() const;

    bool equal(Rational const & other) const;
    bool more_than(Rational const & other) const;

    Rational operator-() const;
    Rational operator+() const;

    void neg();
    void inv();
    double to_double() const;

  private:
    int numerator_;
    int denominator_;
};

Rational operator+(Rational lhs, Rational const &rhs);
Rational operator-(Rational lhs, Rational const &rhs);
Rational operator*(Rational lhs, Rational const &rhs);
Rational operator/(Rational lhs, Rational const &rhs);

bool operator==(Rational const &lhs, Rational const &rhs);
bool operator!=(Rational const &lhs, Rational const &rhs);
bool operator>(Rational const &lhs, Rational const &rhs);
bool operator>=(Rational const &lhs, Rational const &rhs);
bool operator<(Rational const &lhs, Rational const &rhs);
bool operator<=(Rational const &lhs, Rational const &rhs);
