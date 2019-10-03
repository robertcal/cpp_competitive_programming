#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c; cin >> a >> b >> c;

    int mx = max({a, b, c});

    int diff = mx - a + mx - b + mx - c;

    int ans = 0;
    if (diff % 2 == 0) {
        ans = diff / 2;
    } else {
        ans = diff / 2 + 2;
    }

    cout << ans << endl;
}