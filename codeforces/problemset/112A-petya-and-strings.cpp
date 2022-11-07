/* Little Petya loves presents. His mum bought him two strings of the same
size for his birthday. The strings consist of uppercase and lowercase Latin
letters. Now Petya wants to compare those two strings lexicographically. The
letters' case does not matter, that is an uppercase letter is considered
equivalent to the corresponding lowercase letter. Help Petya perform the
comparison. */


#include <iostream>
#include <cctype>
using namespace std;


#define strlower(str) for (char& c: str) c = tolower(c)


int lexico_compare(string str1, string str2) {
    strlower(str1);
    strlower(str2);
    
    if (str1 < str2)
        return -1;
    else if (str1 > str2)
        return 1;
    else    
        return 0;
}


int main() {
    string str1, str2;

    cin >> str1 >> str2;
    cout << lexico_compare(str1, str2) << endl;

    return 0;
}