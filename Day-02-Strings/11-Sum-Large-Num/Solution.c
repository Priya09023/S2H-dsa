#include <stdio.h>
#include <string.h>

int main() {
    char s1[10001], s2[10001], result[10002];
    scanf("%s %s", s1, s2);
    int i = strlen(s1) - 1;
    int j = strlen(s2) - 1;
    int k = 0, carry = 0;

    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if(i >= 0) sum += s1[i--] - '0';
        if(j >= 0) sum += s2[j--] - '0';

        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    for(int l = 0; l < k/2; l++) {
        char temp = result[l];
        result[l] = result[k-l-1];
        result[k-l-1] = temp;
    }

    result[k] = '\0';
    int idx = 0;
    while(result[idx] == '0' && result[idx+1] != '\0') idx++;
    printf("%s", result + idx);
}