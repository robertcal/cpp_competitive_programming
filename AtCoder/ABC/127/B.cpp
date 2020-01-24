#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll r, d, x; cin >> r >> d >> x;

    for (int i = 0; i < 10; ++i) {
        x = r * x - d;

        cout << x << endl;
    }
}