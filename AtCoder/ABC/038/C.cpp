#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll ans = n;

    ll c = 0;

    for (int i = 1; i < n; ++i) {
        if (a[i] > a[i-1]) {
            ++c;
        } else {
            ans += c * (c + 1) / 2;
            c = 0;
        }
    }

    ans += c * (c + 1) / 2;

    cout << ans << endl;
}