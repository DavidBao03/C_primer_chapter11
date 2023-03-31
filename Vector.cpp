//#include "Vector.h"
//#include <cmath>
//
//
//using std::sqrt;
//using std::sin;
//using std::cos;
//using std::atan;
//using std::atan2;
//using std::cout;
//
//using namespace VECTOR;
//
//const double Rad_to_deg = 45.0 / atan(1.0);
//namespace VECTOR {
//    /* void Vector::set_mag() {
//        mag = sqrt(x * x + y * y);
//    }
//
//    void Vector::set_ang() {
//        if (x == 0 && y == 0)
//            ang = 0.0;
//        else
//            ang = atan2(y, x);
//    }
//    */
//    void Vector::set_x() {
//        x = mag_val() * cos(ang_val());
//    }
//
//    void Vector::set_y() {
//        y = mag_val() * sin(ang_val());
//    }
//
//    Vector::Vector() {
//        x = y = 0.0;
//        mode = RECT;
//    }
//
//    Vector::Vector(double n1, double n2, Mode form) {
//        mode = form;
//        if (mode == RECT) {
//            x = n1;
//            y = n2;
//        } else {
//            x = n1 * cos(n2 / Rad_to_deg);
//            y = n1 * sin(n2 / Rad_to_deg);
//        }
//    }
//
//    void Vector::reset(double n1, double n2, Mode form) {
//        mode = form;
//        if (mode == RECT) {
//            x = n1;
//            y = n2;
//        } else {
//            x = n1 * cos(n2 / Rad_to_deg);
//            y = n1 * sin(n2 / Rad_to_deg);
//        }
//    }
//
//    void Vector::polar_form() {
//        mode = POL;
//    }
//
//    void Vector::rect_form() {
//        mode = RECT;
//    }
//
//    Vector Vector::operator+(const Vector &b) const {
//        return Vector(x + b.x, y + b.y);
//    }
//
//    Vector Vector::operator-(const Vector &b) const {
//        return Vector(x - b.x, y - b.y);
//    }
//
//    Vector Vector::operator-() const {
//        return Vector(-x, -y);
//    }
//
//    Vector Vector::operator*(double n) const {
//        return Vector(n * x, n * y);
//    }
//
//    Vector operator*(double n, const Vector &b) {
//        return b * n;
//    }
//
//    std::ostream &operator<<(std::ostream &os, Vector b) {
//        if (b.mode == Vector::RECT)
//            os << "(x,y) = (" << b.x << ", " << b.y << ")";
//        else
//            os << "(m,a) = (" << b.mag_val() << ", " << b.ang_val() * Rad_to_deg << ")";
//        return os;
//    }
//
//    std::fstream &operator<<(std::fstream &ifs, Vector b) {
//        if (b.mode == Vector::RECT)
//            ifs << "(x,y) = (" << b.x << ", " << b.y << ")";
//        else
//            ifs << "(m,a) = (" << b.mag_val() << ", " << b.ang_val() * Rad_to_deg << ")";
//        return ifs;
//    }
//}