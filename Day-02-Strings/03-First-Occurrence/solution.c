#include <stdio.h>
#include <string.h>

int main() {
    char haystack[10001], needle[10001];
    scanf("%s %s", haystack, needle);

    int n = strlen(haystack), m = strlen(needle);

    for(int i = 0; i <= n - m; i++) {
        int j;
        for(j = 0; j < m; j++) {
            if(haystack[i + j] != needle[j])
                break;
        }
        if(j == m) {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");
}