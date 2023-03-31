//#include "Vector.h"
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace VECTOR;
//int main() {
//    using namespace std;
//
//    srand(time(0));
//
//    double direction;
//    Vector step;
//    Vector result(0.0, 0.0);
//    unsigned long steps = 0;
//    double target;
//    double dstep;
//    int tests;
//
//    cout << "Enter target distance (q to quit): ";
//    while (cin >> target) {
//        cout << "Enter step length: ";
//        if (!(cin >> dstep))
//            break;
//
//        cout << "Enter test time: ";
//        if(!(cin >> tests))
//            break;
//
//        int* parr = new int[tests];
//        int max = 0;
//        int min = 999999999;
//        int tot_steps = 0;
//
////        fstream ofs;
////        ofs.open("record");
////        ofs << "Target Distance: " << target << ", Step Size: " << dstep << endl;
//        for(int i = 0;i <tests;i++) {
//            while (result.mag_val() < target) {
////            ofs << "(x,y) = (" << result.x_val() << ", " << result.y_val() << ")" << endl;
//
//                direction = rand() % 360;
//                step.reset(dstep, direction, Vector::POL);
//                result = result + step;
//
//                steps++;
//            }
///*
//        cout << "After " << steps << " steps, the subject "
//                                     "has the following location: \n";
//        cout << result << endl;
//        result.polar_form();
//        cout << " or\n" << result << endl;
//        cout << "Average outward distance per step = "
//             << result.mag_val() / steps << endl;
//*/
//            parr[i] = steps;
//
//            if(steps > max)
//                max = steps;
//            if(steps < min)
//                min = steps;
//
//            tot_steps += steps;
//
//            steps = 0;
//            result.reset(0.0, 0.0);
//        }
//
//        cout << "Max steps : " << max << endl;
//        cout << "Min steps : " << min << endl;
//        cout << "Avg steps : " << (double)tot_steps/tests << endl;
//
//        delete [] parr;
//
//        cout << "Enter target distance (q to quit): ";
//    }
//
//    return 0;
//}
