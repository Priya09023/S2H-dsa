#include <iostream>
using namespace std;

int main() {
    int start, goal, count = 0;
    cin >> start >> goal;

    int num = start ^ goal;

    while (num > 0) {
        if (num & 1)
            count++;
        num = num >> 1;
    }

    cout << count;
    return 0;
}