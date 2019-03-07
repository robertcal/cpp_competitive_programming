#include <bits/stdc++.h>

using namespace std;

int main() {

    long long a, b, c;
    cin >> a >> b >> c;

    if (b >= c) {
        cout << b + c << endl;
    } else {
        if (a + b >= c) {
            cout << b + c << endl;
        } else {
            cout << (a + b) + b + 1 << endl;
        }
    }
}