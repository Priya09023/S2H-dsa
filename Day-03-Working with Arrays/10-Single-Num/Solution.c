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

    printf("%d", xor);
}