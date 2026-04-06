#include <iostream>
using namespace std;

int main() {
    string s;
    char ch;

    getline(cin, s);
    cin >> ch;

    int count = 0;

    for(char c : s) {
        if(c == ch)
            count++;
    }

    cout << count;
}