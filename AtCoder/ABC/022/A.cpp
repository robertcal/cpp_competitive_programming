#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, s, t; cin >> n >> s >> t;
    int w; cin >> w;

    vector<int> a(n-1);
    for (int i = 0; i < n-1; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    if (s <= w && w <= t) {
        ++ans;
    }

    for (int i = 0; i < n-1; ++i) {
        w += a[i];
        if (s <= w && w <= t) {
            ++ans;
        }
    }

    cout << ans << endl;
}