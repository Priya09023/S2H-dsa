#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    fgets(s, sizeof(s), stdin);

    int i = strlen(s) - 1, len = 0;

    while(i >= 0 && (s[i] == ' ' || s[i] == '\n')) i--;
    while(i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    printf("%d", len);
}