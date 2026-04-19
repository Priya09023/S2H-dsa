#include <iostream>
using namespace std;

void reverseArr(int arr[], int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n, k;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    int choice; 
    cin >> choice;

    k = k % n;

    if(choice == 2) {
        reverseArr(arr, 0, n-1);
        reverseArr(arr, 0, k-1);
        reverseArr(arr, k, n-1);
    } else {
        reverseArr(arr, 0, k-1);
        reverseArr(arr, k, n-1);
        reverseArr(arr, 0, n-1);
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}