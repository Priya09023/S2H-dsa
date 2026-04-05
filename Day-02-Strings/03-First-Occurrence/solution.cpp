#include <iostream>
using namespace std;

int main() {
    string h, n;
    cin >> h >> n;

    for(int i = 0; i <= h.size() - n.size(); i++) {
        if(h.substr(i, n.size()) == n) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
}