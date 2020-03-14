#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll h, w; cin >> h >> w;

    if (h == 1 || w == 1) {
        cout << 1 << endl;
        return 0;
    }

    cout << (h * w + 1) / 2 << endl;
}