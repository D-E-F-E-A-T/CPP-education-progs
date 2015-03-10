// Read first and second name.

#include "..\std_lib_facilities.h"

int main() {
    cout << "Please enter your first and second names:\n";

    string first;
    string second;

    cin >> first >> second; // Read two names.

    string name = first + ' ' + second; // Concatenate strings.
    cout << "Hello, " << name << "." << endl;

    return 0;
}
