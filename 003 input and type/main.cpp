// Read name and age.

#include "..\std_lib_facilities.h"

int main() {
    cout << "Please enter your first name and age:\n";

    string first_name;
    double age = -1;
    double age_in_months = 0;

    cin >> first_name >> age;
    age_in_months = 12.0 * age;

    cout << "Hello, " << first_name << " (age " << age << ").\n";
    cout << "In months, you are " << age_in_months << " months old!\n";

    return 0;
}
