//#include "Stonewt.h"
//
//Stonewt::Stonewt(double lbs) {
//    stone = (int) lbs / Lbs_per_stn;
//    pds_left = lbs - stone * Lbs_per_stn;
//    pounds = lbs;
//    mode = POUNDS;
//}
//
//Stonewt::Stonewt(int stn, double lbs) {
//    stone = stn;
//    pds_left = lbs;
//    pounds = stn * Lbs_per_stn + lbs;
//    mode = STONE;
//}
//
//Stonewt::Stonewt() {
//    stone = pds_left = pounds = 0;
//    mode = POUNDS;
//}
//
//void Stonewt::set_Pounds() {
//    mode = POUNDS;
//}
//
//void Stonewt::set_Stone() {
//    mode = STONE;
//}
//
//Stonewt Stonewt::operator+(const Stonewt &b) const {
//    return Stonewt(pounds + b.pounds);
//}
//
//Stonewt Stonewt::operator-(const Stonewt &b) const {
//    return Stonewt(pounds - b.pounds);
//}
//
//Stonewt Stonewt::operator*(double n) const {
//    return Stonewt(pounds * n);
//}
//
//bool Stonewt::operator<(const Stonewt &b) const {
//    return pounds < b.pounds;
//}
//
//bool Stonewt::operator>(const Stonewt &b) const {
//    return pounds > b.pounds;
//}
//
//bool Stonewt::operator<=(const Stonewt &b) const {
//    return pounds <= b.pounds;
//}
//
//bool Stonewt::operator>=(const Stonewt &b) const {
//    return pounds >= b.pounds;
//}
//
//bool Stonewt::operator==(const Stonewt &b) const {
//    return pounds == b.pounds;
//}
//
//bool Stonewt::operator!=(const Stonewt &b) const {
//    return pounds != b.pounds;
//}
//
//Stonewt operator*(double n, const Stonewt &b) {
//    return b * n;
//}
//
//std::ostream &operator<<(std::ostream &os, const Stonewt &s) {
//    if (s.mode == Stonewt::POUNDS) {
//        os << s.pounds << " pounds";
//    } else {
//        os << s.stone << " stones, " << s.pds_left << " pounds";
//    }
//    return os;
//}