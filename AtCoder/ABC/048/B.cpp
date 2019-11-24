#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll a, b, x; cin >> a >> b >> x;

    ll u = b / x;

    if (a % x == 0) {
        cout << u - a / x + 1 << endl;
    } else {
        cout << u - a / x << endl;
    }
}