#include <stdio.h>

int main() {
    int start, goal, count = 0;
    scanf("%d %d", &start, &goal);

    int num = start ^ goal;

    while (num > 0) {
        if (num & 1)
            count++;
        num = num >> 1;
    }

    printf("%d", count);
    return 0;
}