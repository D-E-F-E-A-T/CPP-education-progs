// Unsafe conversions take 2.
// Try and see what happens when an unsafe conversion
// takes place. Allow for many such tests via a while loop.

#include "..\std_lib_facilities.h"

int main() {
    double num = 0;

    cout << "Please input some double numbers. To exit, enter " <<
            "the End-Of-Input character, or not a number." << endl;

    while (cin >> num) {
        int i1 = num;
        char c1 = i1;
        int i2 = c1;

        cout << "Original double num = " << num << "." << endl;

        cout << "i1 = " << i1 << "." << endl;
        cout << "i2 = " << i2 << "." << endl;
        cout << "c1 = '" << c1 << "'." << endl;
    }

    return 0;
}
