//#include "Stonewt.h"
//#include <iostream>
//
//int main() {
//    using std::cout;
//    using std::endl;
//    using std::cin;
///*
//    Stonewt s1(9, 2.8);
//    Stonewt s2(231.7);
//
//    cout << "s1: " << s1 << ", s2: " << s2 << endl;
//    cout << "s1 + s2: " << s1 + s2 << endl;
//    cout << "s2 - s1: " << s2 - s1 << endl;
//    cout << "1.5 * s1: " << 1.5 * s1 << endl;
//    cout << "s2 * 2.5: " << s2 * 2.5 << endl;
//
//    s2.set_Stone();
//    cout << "another version of s2: " << s2 << endl;
//    s1.set_Pounds();
//    cout << "another version of s1: " << s1 << endl;
//*/
//    Stonewt arr[6] = {{120.5},
//                      {250.8},
//                      {821.6}};
//    for (int i = 0; i < 3; i++) {
//        cout << "Enter the pounds you want: ";
//        double temp;
//        cin >> temp;
//        arr[i + 3] = Stonewt(temp);
//    }
//
//    Stonewt cmp(11, 0.0);
//    Stonewt max = arr[0];
//    Stonewt min = arr[0];
//    int count = 0;
//    for (int i = 0; i < 6; i++) {
//        if (max < arr[i]) {
//            max = arr[i];
//        }
//        if (min > arr[i]) {
//            min = arr[i];
//        }
//        if (arr[i] >= cmp) {
//            count++;
//        }
//    }
//
//    cout << "The biggest: " << max << endl;
//    cout << "The smallest: " << min << endl;
//    cout << "Count: " << count << endl;
//
//    return 0;
//}
