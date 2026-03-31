#include <iostream>
using namespace std;
int main() {
    int n, q;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> q;
    while(q--) {
        int l, r, res = 0;
        cin >> l >> r;

        for(int i = l; i <= r; i++)
            res ^= arr[i];

        cout << res << " ";
    }
}