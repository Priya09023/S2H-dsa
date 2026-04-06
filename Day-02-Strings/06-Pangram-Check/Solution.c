#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[10001];
    fgets(s, sizeof(s), stdin);

    int freq[26] = {0};

    for(int i = 0; s[i] != '\0'; i++) {
        if(isalpha(s[i])) {
            char ch = tolower(s[i]);
            freq[ch - 'a'] = 1;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] == 0) {
            printf("false");
            return 0;
        }
    }

    printf("true");
}