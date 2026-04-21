#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    int arr1[n];
    for(int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;

    int arr2[m];
    for(int i = 0; i < m; i++)
        cin >> arr2[i];

    int i = 0, j = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            if(i == 0 || arr1[i] != arr1[i-1])
                cout << arr1[i] << " ";
            i++;
        }
        else if(arr2[j] < arr1[i]) {
            if(j == 0 || arr2[j] != arr2[j-1])
                cout << arr2[j] << " ";
            j++;
        }
        else {
            if(i == 0 || arr1[i] != arr1[i-1])
                cout << arr1[i] << " ";
            i++;
            j++;
        }
    }

    while(i < n) {
        if(i == 0 || arr1[i] != arr1[i-1])
            cout << arr1[i] << " ";
        i++;
    }

    while(j < m) {
        if(j == 0 || arr2[j] != arr2[j-1])
            cout << arr2[j] << " ";
        j++;
    }
}