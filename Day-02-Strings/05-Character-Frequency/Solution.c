#include <stdio.h>
#include <string.h>

int main() {
    char s[10001], ch;
    fgets(s, sizeof(s), stdin);
    scanf(" %c", &ch);

    int count = 0;

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ch)
            count++;
    }

    printf("%d", count);
}