/* "Contestant who earns a score equal to or greater than the k-th place
finisher's score will advance to the next round, as long as the contestant
earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already
know their scores. Calculate how many participants will advance to the next
round. */


#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, k, i;
    int input;
    int k_contestant = 0;
    int qty_advancing = 0;

    cin >> n >> k;
    for (i = 0; i < n; i++) {
        cin >> input;
        if (input < 1)
            break;
        if (i+1 == k)
            k_contestant = input;
        if (input >= k_contestant)
            qty_advancing++;
    }

    cout << qty_advancing << endl;

    return 0;
}