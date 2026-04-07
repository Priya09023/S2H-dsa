#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int freq[26] = {0};

    for(char c : s1)
        freq[c - 'a']++;

    for(char c : s2)
        freq[c - 'a']--;

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}