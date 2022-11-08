/* Theatre Square in the capital city of Berland has a rectangular shape with
the size n × m meters. On the occasion of the city's anniversary, a decision
was taken to pave the Square with square granite flagstones. Each flagstone is
of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed
to cover the surface larger than the Theatre Square, but the Square has to be
covered. It's not allowed to break the flagstones. */


#include <iostream>
#include <math.h>
using namespace std;


int main() {
    double n, m, a;
    uint64_t answer;
    
    cin >> n >> m >> a;
    answer = ceil(n/a)*ceil(m/a);
    cout << answer;
    
    return 0;
}