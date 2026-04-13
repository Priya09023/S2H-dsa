#include <iostream>
using namespace std;

string ones[] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ",
                 "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ", "nineteen "};

string tens[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ",
                 "sixty ", "seventy ", "eighty ", "ninety "};

void convert(int n) {
    if(n >= 100) {
        cout << ones[n/100] << "hundred ";
        n %= 100;
    }
    if(n >= 20) {
        cout << tens[n/10];
        n %= 10;
    }
    if(n > 0) {
        cout << ones[n];
    }
}

int main() {
    int n;
    cin >> n;

    if(n == 0) {
        cout << "zero";
        return 0;
    }

    if(n >= 10000000) {
        convert(n/10000000);
        cout << "crore ";
        n %= 10000000;
    }
    if(n >= 100000) {
        convert(n/100000);
        cout << "lakh ";
        n %= 100000;
    }
    if(n >= 1000) {
        convert(n/1000);
        cout << "thousand ";
        n %= 1000;
    }
    if(n > 0) {
        convert(n);
    }
}