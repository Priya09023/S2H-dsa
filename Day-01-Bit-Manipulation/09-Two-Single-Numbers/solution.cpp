#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int xr = 0;
    for(int i = 0; i < n; i++)
        xr ^= arr[i];

    int diff = xr & (-xr);
    int x = 0, y = 0;

    for(int i = 0; i < n; i++) {
        if((arr[i] & diff) == 0)
            x ^= arr[i];
        else
            y ^= arr[i];
    }

    if(x > y) swap(x, y);

    cout << x << " " << y;
}