#include <stdio.h>
int main() {
    int n, x, res = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &x);
        res ^= x;
    }
    printf("%d", res);
}