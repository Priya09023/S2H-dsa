#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n < 2) {
        printf("-1 -1");
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest = INT_MAX, second_smallest = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;

    for(int i = 0; i < n; i++) {
        // smallest
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if(arr[i] > smallest && arr[i] < second_smallest) {
            second_smallest = arr[i];
        }

        // largest
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    if(second_smallest == INT_MAX || second_largest == INT_MIN)
        printf("-1 -1");
    else
        printf("%d %d", second_smallest, second_largest);
}