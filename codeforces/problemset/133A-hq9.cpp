/* HQ9+ is a joke programming language which has only four one-character
instructions:
    "H" prints "Hello, World!",
    "Q" prints the source code of the program itself,
    "9" prints the lyrics of "99 Bottles of Beer" song,
    "+" increments the value stored in the internal accumulator.

Instructions "H" and "Q" are case-sensitive and must be uppercase. The
characters of the program which are not instructions are ignored.

You are given a program written in HQ9+. You have to figure out whether
executing this program will produce any output. */


#include <iostream>
using namespace std;


bool will_print(string instructions) {
    for (char& i : instructions){
        switch(i) {
            case 'H':
            case 'Q':
            case '9':
                return true;
        }
    }
    return false;
}


int main() {
    string input;

    cin >> input;
    cout << (will_print(input) ? "YES" : "NO") << endl;

    return 0;
}