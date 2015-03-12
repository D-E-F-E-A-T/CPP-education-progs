// Simple form letter. Answer a few questions about yourself,
// the recipient. A letter will be generated based on your answers.

#include "..\std_lib_facilities.h"

int main() {
    string to_firstname = "";
    int to_how_old = -1;
    string from_firstname = "";
    string friend_name = "";
    string gender_friend = "";

    cout << "What is your name?" << endl;
    cin >> from_firstname;

    cout << "Who are you sending this letter to?" << endl;
    cin >> to_firstname;

    while (to_how_old <= 0) {
        cout << "How old is the recipient of the letter?" << endl;
        cin >> to_how_old;

        if (to_how_old <= 0) {
            to_how_old = -1;
        }

        if (to_how_old >= 110) {
            to_how_old = -1;
        }

        if (to_how_old == -1) {
            cout << "You are kidding!" << endl;
        }
    }

    cout << "What is a name of a mutual friend?" << endl;
    cin >> friend_name;

    while (gender_friend == "") {
        cout << "Is this a boy or a girl? Please write either 'boy', " <<
                "or 'girl'." << endl;

        cin >> gender_friend;

        if (gender_friend != "boy") {
            if (gender_friend != "girl") {
                gender_friend = "";
            }
        }
    }

    cout << "Processing your information..." << endl << endl;

    // Now we output the letter to the user.
    cout << "Dear " << to_firstname << "," << endl;
    cout << endl;
    cout << "    How are you? I am fine. I miss you." << endl;
    cout << "Have you seen " << friend_name << " lately?" << endl;
    cout << "If you see " << friend_name << " please ask ";
    if (gender_friend == "boy") {
        cout << "him";
    }
    if (gender_friend == "girl") {
        cout << "her";
    }
    cout << " to call me." << endl;
    cout << "I hear you just had a birthday and you are " << to_how_old <<
            " years old." << endl;
    if (to_how_old < 12) {
        cout << "Next year you will be " << to_how_old + 1 << "." << endl;
    }
    if (to_how_old == 17) {
        cout << "Next year you will be able to vote." << endl;
    }
    if (to_how_old > 70) {
        cout << "I hope you are enjoying retirement." << endl;
    }
    cout << endl;
    cout << "Yours sincerely," << endl << endl << endl;
    cout << from_firstname;

    return 0;
}
