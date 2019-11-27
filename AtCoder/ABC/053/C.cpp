#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll x; cin >> x;

    if (x <= 6) {
        cout << 1 << endl;
        return 0;
    }

    if (x <= 11) {
        cout << 2 << endl;
        return 0;
    }

    if (x % 11 == 0) {
        cout << (x / 11) * 2 << endl;
        return 0;
    }

    if (x % 11 <= 6) {
        cout << (x / 11) * 2 + 1 << endl;
    } else {
        cout << (x / 11 + 1) * 2 << endl;
    }
}