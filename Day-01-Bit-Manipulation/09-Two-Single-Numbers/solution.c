#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xor = 0;
    for(int i = 0; i < n; i++)
        xor ^= arr[i];

    int diff = xor & (-xor);
    int x = 0, y = 0;

    for(int i = 0; i < n; i++) {
        if((arr[i] & diff) == 0)
            x ^= arr[i];
        else
            y ^= arr[i];
    }

    if(x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("%d %d", x, y);
}