#include <iostream>
using namespace std;

int main() {
    string s, s1, s2;
    cin >> s >> s1 >> s2;

    string result = "";

    for(int i = 0; i < s.size(); ) {
        if(s.substr(i, s1.size()) == s1) {
            result += s2;
            i += s1.size();
        } else {
            result += s[i];
            i++;
        }
    }

    cout << result;
}