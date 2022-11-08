/* Capitalization is writing a word with its first letter as a capital
letter. Your task is to capitalize the given word. */


#include <iostream>
#include <ctype.h>
using namespace std;


int main() {
    string input;

    cin >> input;
    input[0] = toupper(input[0]);
    cout << input;

    return 0;
}