#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i = s.size() - 1, len = 0;

    while(i >= 0 && s[i] == ' ') i--;
    while(i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    cout << len;
}