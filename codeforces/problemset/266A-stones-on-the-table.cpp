/* There are n stones on the table in a row, each of them can be red, green
or blue. Count the minimum number of stones to take from the table so that
any two neighboring stones had different colors.  */


#include <iostream>
using namespace std;


int main() {
    int n, i;
    char last = ' ';
    char curr;
    int count = 0;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> curr;
        if (curr == last)
            count++;
        last = curr;
    }
    cout << count << endl;

    return 0;
}