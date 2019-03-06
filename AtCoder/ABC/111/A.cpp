#include <iostream>

using namespace std;

int main() {

    string n;
    cin >> n;

    for (char c:n) { //範囲for文と言うみたい
        if (c == '1') {
            cout << 9;
        } else {
            cout << 1;
        }
    }

    return 0;
}