#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int i = s1.size() - 1, j = s2.size() - 1, carry = 0;
    string result = "";

    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if(i >= 0) sum += s1[i--] - '0';
        if(j >= 0) sum += s2[j--] - '0';

        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());

    int pos = 0;
    while(pos < result.size()-1 && result[pos] == '0') pos++;

    cout << result.substr(pos);
}