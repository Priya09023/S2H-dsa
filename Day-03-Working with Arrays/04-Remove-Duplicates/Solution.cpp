#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int k = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[k-1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    for(int i = 0; i < n; i++) {
        if(i < k)
            cout << arr[i] << " ";
        else
            cout << "_ ";
    }
}