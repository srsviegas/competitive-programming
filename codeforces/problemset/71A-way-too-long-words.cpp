/*Input
The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n
lines contains one word. All the words consist of lowercase Latin letters and
possess the lengths of from 1 to 100 characters.

Output
Print n lines. The i-th line should contain the result of replacing of the i-th
word from the input data. */


#include <iostream>
#include <vector>
using namespace std;


string abbreviate(string str) {
    if (str.length() <= 10)
        return str;
    else
        return str[0] + to_string(str.length()-2) + str.back();
}


int main() {
    vector<string> words;
    string word;
    int n, i;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> word;
        words.push_back(abbreviate(word));
    }

    for (string w: words)
        cout << w << endl;

    return 0;
}