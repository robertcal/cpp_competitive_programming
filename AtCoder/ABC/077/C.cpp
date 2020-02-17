#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll ans = 0;

    //bを固定して考える
    for (int i = 0; i < n; ++i) {
        auto a_itr = lower_bound(a.begin(), a.end(), b[i]);
        auto c_itr = upper_bound(c.begin(), c.end(), b[i]);

        ans += (a_itr - a.begin()) * (c.end() - c_itr);
    }

    cout << ans << endl;
}