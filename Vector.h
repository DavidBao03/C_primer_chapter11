//#ifndef C_PRIMER_CHAPTER11_VECTOR_H
//#define C_PRIMER_CHAPTER11_VECTOR_H
//
//#include <iostream>
//#include <cmath>
//#include <fstream>
//
//namespace VECTOR {
//    class Vector {
//    public:
//        enum Mode {
//            RECT, POL
//        };
//    private:
//        double x;
//        double y;
//        //double mag;
//        //double ang;
//        Mode mode;
//
//        //void set_mag();
//
//        //void set_ang();
//
//        void set_x();
//
//        void set_y();
//
//    public:
//        Vector();
//
//        Vector(double n1, double n2, Mode form = RECT);
//
//        void reset(double n1, double n2, Mode form = RECT);
//
//        double x_val() { return x; }
//
//        double y_val() { return y; }
//
//        double mag_val() { return sqrt(x * x + y * y); }
//
//        double ang_val() {
//            if (x == 0 && y == 0)
//                return 0.0;
//            else
//                return atan2(y, x);
//        }
//
//        void polar_form();
//
//        void rect_form();
//
//        Vector operator+(const Vector &b) const;
//
//        Vector operator-(const Vector &b) const;
//
//        Vector operator-() const;
//
//        Vector operator*(double n) const;
//
//        friend Vector operator*(double n, const Vector &b);
//
//        friend std::ostream &operator<<(std::ostream &os, Vector b);
//
//        friend std::fstream &operator<<(std::fstream &ifs, Vector b);
//    };
//}
//
//#endif //C_PRIMER_CHAPTER11_VECTOR_H
