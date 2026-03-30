#include <iostream>
using namespace std;
int main() {
    int l, r, res = 0;
    cin >> l >> r;

    for (int i = l; i <= r; i++)
        res ^= i;

    cout << res;
}