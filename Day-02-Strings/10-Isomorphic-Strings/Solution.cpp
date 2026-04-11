#include <stdio.h>
#include <string.h>

int main() {
    char s1[10001], s2[10001];
    scanf("%s %s", s1, s2);

    int map1[256] = {0}, map2[256] = {0};

    for(int i = 0; s1[i]; i++) {
        if(map1[s1[i]] == 0 && map2[s2[i]] == 0) {
            map1[s1[i]] = s2[i];
            map2[s2[i]] = s1[i];
        } else {
            if(map1[s1[i]] != s2[i]) {
                printf("false");
                return 0;
            }
        }
    }

    printf("true");
}