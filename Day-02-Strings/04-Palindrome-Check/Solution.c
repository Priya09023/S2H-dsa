#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    scanf("%s", s);

    int l = 0, r = strlen(s) - 1;

    while(l < r) {
        if(s[l] != s[r]) {
            printf("0");
            return 0;
        }
        l++;
        r--;
    }

    printf("1");
}