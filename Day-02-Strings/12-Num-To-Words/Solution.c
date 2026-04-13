#include <stdio.h>

char *ones[] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ",
                "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ", "nineteen "};

char *tens[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ",
                "sixty ", "seventy ", "eighty ", "ninety "};

void convert(int n) {
    if(n >= 100) {
        printf("%s hundred ", ones[n/100]);
        n %= 100;
    }
    if(n >= 20) {
        printf("%s", tens[n/10]);
        n %= 10;
    }
    if(n > 0) {
        printf("%s", ones[n]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if(n == 0) {
        printf("zero");
        return 0;
    }

    if(n >= 10000000) {
        convert(n/10000000);
        printf("crore ");
        n %= 10000000;
    }
    if(n >= 100000) {
        convert(n/100000);
        printf("lakh ");
        n %= 100000;
    }
    if(n >= 1000) {
        convert(n/1000);
        printf("thousand ");
        n %= 1000;
    }
    if(n > 0) {
        convert(n);
    }
}