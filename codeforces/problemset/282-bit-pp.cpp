/* There are two operations:
Operation ++ increases the value of variable x by 1.
Operation -- decreases the value of variable x by 1. 

You're given a programme in language Bit++. The initial value of x is 0.
Execute the programme and find its final value (the value of the variable
when this programme is executed). */


#include <iostream>
using namespace std;


int main() {
    string input;
    int x = 0;
    int n_oper;
    int i;

    cin >> n_oper;
    for (i = 0; i < n_oper; i++) {
        cin >> input;
        if (input.find('+') != string::npos)
            x++;
        else
            x--;
    }
    cout << x << endl;

    return 0;
}