/* Xenia is only beginning to count, so she can calculate a sum only if the
summands follow in non-decreasing order. For example, she can't calculate sum
1+3+2+1 but she can calculate sums 1+1+2 and 3+3. 

You've got the sum that was written on the board. Rearrange the summans and
print the sum in such a way that Xenia can calculate the sum.*/


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    string input;
    vector<char> numbers;

    cin >> input;
    for (char& c: input) {
        if (c != '+') {
            numbers.push_back(c);
        }
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++) {
        if (i != 0)
            cout << '+';
        cout << numbers[i];
    }

    return 0;
}