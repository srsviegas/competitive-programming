/* So you decided to act like that: pick for yourself some subset of coins so
that the sum of values of your coins is strictly larger than the sum of values
of the remaining coins that your twin will have. However, you correctly thought
that if you take too many coins, the twin will suspect the deception. So, you've
decided to stick to the following strategy to avoid suspicions: you take the
minimum number of coins, whose sum of values is strictly more than the sum of
values of the remaining coins. On this basis, determine what minimum number of
coins you need to take to divide them in the described manner. */


#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;


int minimum_coins(int *coins, int n) {
    int val_taken = 0, qty_taken = 0;
    int remaining = accumulate(coins, coins+n, 0);
    sort(coins, coins + n, greater<int>());
    for (int i = 0; i < n; i++) {
        remaining -= coins[i];
        val_taken += coins[i];
        qty_taken++;
        if (val_taken > remaining)
            return qty_taken;
    }
}


int main() {
    int coins[100] = {0};
    int n, i;

    cin >> n;
    for (i = 0; i < n; i++)
        cin >> coins[i];

    cout << minimum_coins(coins, n) << endl;

    return 0;
}