//#ifndef C_PRIMER_CHAPTER11_STONEWT_H
//#define C_PRIMER_CHAPTER11_STONEWT_H
//
//#include <iostream>
//
//class Stonewt {
//public:
//    enum Mode {
//        STONE, POUNDS
//    };
//private:
//    enum {
//        Lbs_per_stn = 14
//    };
//    int stone;
//    double pds_left;
//    double pounds;
//    Mode mode;
//public:
//    Stonewt(double lbs);
//
//    Stonewt(int stn, double lbs);
//
//    Stonewt();
//
//    void set_Pounds();
//
//    void set_Stone();
//
//    Stonewt operator+(const Stonewt &b) const;
//
//    Stonewt operator-(const Stonewt &b) const;
//
//    Stonewt operator*(double n) const;
//
//    bool operator<(const Stonewt &b) const;
//
//    bool operator>(const Stonewt &b) const;
//
//    bool operator<=(const Stonewt &b) const;
//
//    bool operator>=(const Stonewt &b) const;
//
//    bool operator==(const Stonewt &b) const;
//
//    bool operator!=(const Stonewt &b) const;
//
//    friend Stonewt operator*(double n, const Stonewt &b);
//
//    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
//};
//
//#endif //C_PRIMER_CHAPTER11_STONEWT_H
