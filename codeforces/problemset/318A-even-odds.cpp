/* Being a nonconformist, Volodya is displeased with the current state of
things, particularly with the order of natural numbers. He is determined to
rearrange them. But there are too many natural numbers, so Volodya decided
to start with the first n. He writes down the following sequence of numbers:
firstly all odd integers from 1 to n (in ascending order), then all even
integers from 1 to n (also in ascending order). Help our hero to find out
which number will stand at the position number k. */


#include <iostream>
#include <math.h>
using namespace std;


uint64_t next_even(uint64_t n) {
    if (!(n & 1))
        return n;
    else
        return n+1;
}


uint64_t kth_element(uint64_t n, uint64_t k) {
    n = next_even(n);
    if (k <= n/2)
        return 2*k - 1;
    else
        return 2*k - n;
}


int main() {
    uint64_t n, k;

    cin >> n >> k;
    cout << kth_element(n, k);

    return 0;
}