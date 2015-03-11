// Unsafe conversions.

#include "..\std_lib_facilities.h"

int main() {
    int a = 20000;
    char c = a; // Try to squeeze a large int into a small char.
    int b = c;

    if (a != b) {
        cout << "Oops! " << a << " != " << b << "." << endl;
    } else {
        cout << "Wow! We have large characters = )" << endl;
    }

    return 0;
}
