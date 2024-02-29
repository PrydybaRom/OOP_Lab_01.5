#pragma once
#include "Pair.h"
#include <string>
using namespace std;

class Rational {
private:
    string spec;
    Pair fraction;

public:
    Rational(int numerator = 0, int denominator = 1) : fraction(numerator, denominator) {}
    bool Init(Pair fraction);

    void Display() const;
    void Read();

    void setNumerator(int numerator) {
        fraction.setFirst(numerator);
    }
    void setDenominator(int denominator) {
        fraction.setSecond(denominator);
    }

    int getNumerator() const { return fraction.getFirst(); }
    int getDenominator() const { return fraction.getSecond(); }


    bool operator>(const Rational& other) const {
        return fraction > other.fraction;
    }

    bool operator<(const Rational& other) const {
        return other.fraction > fraction;
    }

    bool operator==(const Rational& other) const {
        return !(fraction > other.fraction) && !(other.fraction > fraction);
    }

    bool operator!=(const Rational& other) const {
        return !(*this == other);
    }

    bool operator>=(const Rational& other) const {
        return (*this > other) || (*this == other);
    }

    bool operator<=(const Rational& other) const {
        return (*this < other) || (*this == other);
    }

    string numberToWords(int numbers);
};