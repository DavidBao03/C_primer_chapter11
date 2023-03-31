#ifndef C_PRIMER_CHAPTER11_PLURAL_H
#define C_PRIMER_CHAPTER11_PLURAL_H

#include <iostream>

class Plural {
private:
    double x;
    double y;
public:
    Plural();

    Plural(double x, double y);

    Plural operator+(const Plural &b) const;

    Plural operator-(const Plural &b) const;

    Plural operator*(const Plural &b) const;

    Plural operator~() const;

    friend Plural operator*(double n, const Plural &b);

    friend std::ostream &operator<<(std::ostream &os, const Plural &b);

    friend std::istream &operator>>(std::istream &is, Plural &b);
};


#endif //C_PRIMER_CHAPTER11_PLURAL_H
