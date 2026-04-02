#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int total = 1 << n;

    for(int num = 0; num < total; num++) {
        cout << "[";
        for(int i = 0; i < n; i++) {
            if(num & (1 << i))
                cout << arr[i] << " ";
        }
        cout << "] ";
    }
}