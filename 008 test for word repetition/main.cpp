// A program to test for repetition of the previous word as you
// type in new words.

#include "..\std_lib_facilities.h"

int main() {
    string previous = " ";
    string current;

    cout << "Type in a sentence with many words, or single words one by one." << endl;
    cout << "If a word is repeated twice or more, the program will notify you." << endl;
    cout << endl;

    // Repeat, as long as the input operation suceeds. This loop can be
    // terminated by giving the program an end-of-input character. On a
    // Windows machine that's a Ctrl+Z followed by Enter.
    while (cin >> current) {
        if (current == previous) {
            cout << "Repeated word: " << current << "." << endl;
        }

        previous = current;
    }

    return 0;
}
