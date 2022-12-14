/* Petya loves football very much. One day, as he was watching a football
match, he was writing the players' current positions on a piece of paper.
To simplify the situation he depicted it as a string consisting of zeroes
and ones. A zero corresponds to players of one team; a one corresponds to
players of another team. If there are at least 7 players of some team
standing one after another, then the situation is considered dangerous. For
example, the situation 00100110111111101 is dangerous and 11110111011101 is
not. You are given the current situation. Determine whether it is dangerous
or not. */


#include <iostream>
using namespace std;


bool is_dangerous(string str) {
    if (str.length() < 7)
        return false;
    int counter = 0;
    char last = str[0];
    for (char& c: str) {
        counter++;
        if (c != last) {
            counter = 1;
            last = c;
        }
        else if (counter > 6) {
            return true;
        }
    }
    return false;
}


int main() {
    string input;

    cin >> input;
    cout << (is_dangerous(input) ? "YES" : "NO") << endl;

    return 0;
}