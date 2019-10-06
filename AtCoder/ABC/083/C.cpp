#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll x, y; cin >> x >> y;

    ll ans = 0;

    while (x <= y) {
        ++ans;

        x *= 2;
    }

    cout << ans << endl;
}