/* You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one.
In one move, you are allowed to apply one of the two following transformations
to the matrix:

 1. Swap two neighboring matrix rows, that is, rows with indexes i and i + 1
    for some integer i (1 ≤ i < 5).
 2. Swap two neighboring matrix columns, that is, columns with indexes j and
    j + 1 for some integer j (1 ≤ j < 5).

You think that a matrix looks beautiful, if the single number one of the matrix
is located in its middle (in the cell that is on the intersection of the third
row and the third column). Count the minimum number of moves needed to make the
matrix beautiful. */


#include <iostream>
#include <math.h>
using namespace std;


int main() {
    bool input = 0;
    int i, j;
    int operations;

    for (i = 0; i < 5 && !input; i++) {
        for (j = 0; j < 5 && !input; j++) {
            cin >> input;
            if (input)
                operations = abs(2-i) + abs(2-j);
        }
    }

    cout << operations << endl;

    return 0;
}