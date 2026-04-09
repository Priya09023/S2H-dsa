#include <stdio.h>
#include <string.h>

int main() {
    char s[10001], s1[1001], s2[1001], result[20000];
    scanf("%s %s %s", s, s1, s2);

    int i = 0, j = 0, n = strlen(s), m = strlen(s1);

    while(i < n) {
        if(strncmp(&s[i], s1, m) == 0) {
            strcpy(&result[j], s2);
            j += strlen(s2);
            i += m;
        } else {
            result[j++] = s[i++];
        }
    }

    result[j] = '\0';
    printf("%s", result);
}