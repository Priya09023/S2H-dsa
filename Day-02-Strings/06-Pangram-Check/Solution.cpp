#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<int> freq(26, 0);

    for(char c : s) {
        if(isalpha(c)) {
            freq[tolower(c) - 'a'] = 1;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] == 0) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
}