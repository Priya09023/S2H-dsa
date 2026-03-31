#include <stdio.h>
int main() {
    int n, q;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &q);
    while(q--) {
        int l, r, res = 0;
        scanf("%d %d", &l, &r);

        for(int i = l; i <= r; i++)
            res ^= arr[i];

        printf("%d ", res);
    }
}