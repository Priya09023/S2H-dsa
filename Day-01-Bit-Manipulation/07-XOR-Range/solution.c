#include <stdio.h>
int main() {
    int l, r, res = 0;
    scanf("%d %d", &l, &r);

    for (int i = l; i <= r; i++)
        res ^= i;

    printf("%d", res);
}