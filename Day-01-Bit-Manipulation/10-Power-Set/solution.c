#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total = 1 << n;

    for(int num = 0; num < total; num++) {
        printf("[");
        for(int i = 0; i < n; i++) {
            if(num & (1 << i))
                printf("%d ", arr[i]);
        }
        printf("] ");
    }
}