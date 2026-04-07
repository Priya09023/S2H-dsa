#include <stdio.h>
#include <string.h>

int main() {
    char s1[10001], s2[10001];
    scanf("%s %s", s1, s2);

    int freq[26] = {0};

    for(int i = 0; s1[i]; i++)
        freq[s1[i] - 'a']++;

    for(int i = 0; s2[i]; i++)
        freq[s2[i] - 'a']--;

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("false");
            return 0;
        }
    }
    printf("true");
}