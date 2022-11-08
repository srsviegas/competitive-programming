/* Bear Limak wants to become the largest of bears, or at least to become
larger than his brother Bob.

Limak eats a lot and his weight is tripled after every year, while Bob's
weight is doubled after every year.

After how many full years will Limak become strictly larger than Bob? */


#include <iostream>
using namespace std;


int main() {
    int a, b;
    int years = 0;

    cin >> a >> b;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years << endl;

    return 0;
}