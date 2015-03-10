// Simple program to excercise operators.

#include "..\std_lib_facilities.h"

int main() {
    cout << "Please enter a floating-point value:\n";

    double n;
    cin >> n;

    cout << "n == " << n << ".\n";
    cout << "n + 1 == " << 1.0 + n << ".\n";
    cout << "Three times n == " << 3.0 * n << ".\n";
    cout << "Twice n == " << n + n << ".\n";
    cout << "n squared == " << n * n << ".\n";
    cout << "Half of n == " << n / 2.0 << ".\n";
    cout << "Square root of n == " << sqrt(n);

    cout << endl; // Another name for newline ("end of line").

    return 0;
}
