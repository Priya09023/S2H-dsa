#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    scanf("%s", s);

    int n = strlen(s);

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(s[i] > s[j]) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("%s", s);
}