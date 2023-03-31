////
//// Created by 鲍子硕 on 2023/3/31.
////
//
//#include "Time.h"
//
//Time::Time() {
//    hours = minutes = 0;
//}
//
//Time::Time(int hr, int mins) {
//    hours = hr;
//    minutes = mins;
//}
//
//void Time::AddMin(int mins) {
//    minutes += mins;
//    hours += minutes / 60;
//    minutes %= 60;
//}
//
//void Time::AddHr(int hr) {
//    hours += hr;
//}
//
//void Time::Reset(int hr, int mins) {
//    hours = hr;
//    minutes = mins;
//}
//
//Time operator+(const Time &a, const Time &b) {
//    int min = a.minutes + b.minutes;
//    int hr = a.hours + b.hours + min / 60;
//    min %= 60;
//    return Time(hr, min);
//}
//
//Time operator-(const Time &a, const Time &b) {
//    int min = a.minutes - b.minutes;
//    int hr = a.hours - b.hours;
//    return Time(hr, min);
//}
//
//Time operator*(const Time &a, double b) {
//    long totmins = a.hours*60*b + a.minutes*b;
//    int min = totmins % 60;
//    int hr = totmins / 60;
//    return Time(hr, min);
//}
//
//Time operator*(double b, const Time &a) {
//    return a * b;
//}
//
//std::ostream &operator<<(std::ostream &os, const Time &a) {
//    os << a.hours << " hours, " << a.minutes << " minutes";
//    return os;
//}