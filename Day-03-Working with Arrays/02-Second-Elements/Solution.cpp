#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n < 2) {
        cout << "-1 -1";
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int smallest = INT_MAX, second_smallest = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if(arr[i] > smallest && arr[i] < second_smallest) {
            second_smallest = arr[i];
        }

        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    if(second_smallest == INT_MAX || second_largest == INT_MIN)
        cout << "-1 -1";
    else
        cout << second_smallest << " " << second_largest;
}