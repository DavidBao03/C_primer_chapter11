#include "Plural.h"

Plural::Plural() {
    x = y = 0.0;
}

Plural::Plural(double x, double y) {
    this->x = x;
    this->y = y;
}

Plural Plural::operator+(const Plural &b) const {
    return Plural(x + b.x, y + b.y);
}

Plural Plural::operator-(const Plural &b) const {
    return Plural(x - b.x, y - b.y);
}

Plural Plural::operator*(const Plural &b) const {
    return Plural(x * b.x - y * b.y, x * b.y + y * b.x);
}

Plural Plural::operator~() const {
    return Plural(x, -y);
}

Plural operator*(double n, const Plural &b) {
    return Plural(n * b.x, n * b.y);
}

std::ostream &operator<<(std::ostream &os, const Plural &b) {
    os << "(" << b.x << "," << b.y << "i)";
    return os;
}

std::istream &operator>>(std::istream &is, Plural &b) {
    std::cout << "real: ";
    if (is >> b.x) {
        std::cout << "imaginary part: ";
        is >> b.y;
    }
    return is;
}