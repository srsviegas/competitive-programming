/* Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the
weight of the watermelon bought by the boys.
 
 * Output
Print YES, if the boys can divide the watermelon into two parts, each of them
weighing even number of kilos; and NO in the opposite case. */


#include <iostream>
using namespace std;


bool is_even(int w) {
    return !(w & 1);
}


int main() {
    int w;

    cin >> w;
    cout << ((w > 2 && is_even(w))? "YES": "NO") << endl;

    return 0;
}