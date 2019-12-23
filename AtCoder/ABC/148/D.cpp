#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n; cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    int current = 1;

    for (int i = 0; i < n; ++i) {
        if (a[i] != current) {
            ++ans;
        } else {
            ++current;
        }
    }

    if (ans == n) {
        puts("-1");
    } else {
        cout << ans << endl;
    }
}